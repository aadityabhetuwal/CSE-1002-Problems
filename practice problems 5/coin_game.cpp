#include<iostream>
using namespace std;

class coin
{
protected:
	int weight;
	int curr_X;
	int curr_Y;

public:

	void get();
	void print();
	//return the current row position
	int get_Curr_X();
	//return the current col position
	int get_Curr_Y();
	//return weight of the coin
	int get_Weight();
	//pure virtual function that the derived classes must implement
	virtual void move()=0;
};

struct point{
    int x, y;

    point() { }

    point(int xval, int yval){
        x = xval;
        y = yval;

    }

    friend ostream& operator <<(ostream& os, point p){

        if(p.x < 1 || p.x > 8 || p.y < 1 || p.y > 8)
            return os;

        os << p.x << ',' << p.y << '\n';
        return os;
    }

    point operator + (point& p){
        point res;
        res.x = x + p.x;
        res.y = y + p.y;
        return res;
    }
};

point p1(-1, 0), p2(1, 0), p3(0, -1), p4(0, 1), p5(-1, -1), p6(1, -1), p7(-1, 1), p8(1, 1);

//Define two more classes black_Coin and red_Coin
class black_Coin : public coin{

public:

    int moves;

    black_Coin(){ }

    void get(){
        cin >> this->weight;
        cin >> this->curr_X >> this->curr_Y;
        cin >> this->moves;
    }

    bool gained_Power(){
        if(this->moves >= 5)
            return 1;
        return 0;
    }

    void get_data(int *wei, int *x, int *y){
        *wei = this->weight;
        *x = this->curr_X;
        *y = this->curr_Y;
    }

    virtual void move(){
        point tmp(curr_X, curr_Y);
        cout << tmp + p4;
    }
};

class red_Coin: public coin{

public:
    int moves;

    red_Coin() { }

    void get(){
        cin >> this->weight;
        cin >> this->curr_X >> this->curr_Y;
        cin >> this->moves;
    }

    void set_Curr_Pos_Wt(black_Coin b){
        int wei, x, y;

        b.get_data(&wei, &x, &y);
        this->weight = wei;
        this->curr_X = x;
        this->curr_Y = y;
    }

    virtual void move(){
        point tmp(curr_X, curr_Y);

        cout << tmp + p1;
        cout << tmp + p2;
        cout << tmp + p3;
        cout << tmp + p4;
        cout << tmp + p5;
        cout << tmp + p6;
        cout << tmp + p7;
        cout << tmp + p8;
    }  

};

void coin::get() { }

void coin::print() {cout << weight << '\n';}


int main()
{
	coin *c;
	black_Coin b;
	b.get();
	red_Coin r;
       //Function to check if the black coin has gained power
       // It gains power when the number of movements made is greater than or equal to 5
	if(b.gained_Power())
	{
	//Make the black coin as red coin
        //set weight and current position of black coin to a red coin
	 r.set_Curr_Pos_Wt(b);
	 c = &r;	
         //Print only weight of the coiin
	 c->print();
        //Print all possible moves
	 c->move();
	}
	else
	{
		c = &b;
	        //Print only weight of the coiin
	       c->print();
               //Print all possible moves
	       c->move();
	}
	
}