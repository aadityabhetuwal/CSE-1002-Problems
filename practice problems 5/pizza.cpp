#include<iostream>
#include<string.h>
#include<iomanip>

using namespace std;

class circle
{
protected:
	float radius;
public:
	void get_C();
	void print_C();
	float area();
};

struct ingre_Cost
{
	char name[30];
	float price;
};

class kitchen
{
protected:
	int num1;
	//ingredients in the kitchen and their cost
	ingre_Cost ing_Cost[20];

public:

	void get_K();
	void print_K();
	//Given name of ingredients
	//return cost of 100gm of it
	float get_Cost(char*);
};

struct ingre_Qty
{
	char name[30];
	float qty;
};

class cookeditem
{
protected:
	//number of ingredients
	int num;
	// names of ingredients and their quantity in
	// Pizza
	ingre_Qty ing_Qty[20];
public:
	void get_CI();
	void print_CI();
};

//Create a class pizza that inherits circle and cookeditem
//Create another class veg_Pizza inherited that inherits pizza
//Create another class chik_Pizza inherited that inherits pizza

const float pi = 3.14f;

class pizza : public cookeditem, public circle{

public:

    pizza(){ }

    virtual ~pizza() { }

    void get_P(){
        cin >> this->radius;
        cin >> this->num;

        for(int i = 0; i < this->num; i++){
            cin >> this->ing_Qty[i].name >> this->ing_Qty[i].qty;
        }

    }

    virtual void compute_Cost(kitchen k) { };
    virtual void print_P() { };

};

// pizza::~pizza() { }

class veg_Pizza : public pizza{

public:
    double res;
    double extra = 50;


    virtual void compute_Cost(kitchen k){
        float tmp;
        this->res = 0;

        for(int i = 0; i < this->num; i++){
            tmp = k.get_Cost(ing_Qty[i].name);
            this->res = this->res + tmp * ing_Qty[i].qty;
        }

    } 

    virtual void print_P(){
        float area = pi * radius * radius;
        cout << fixed << setprecision(2) << area * res + extra << '\n';
    }
};

class chik_Pizza : public pizza{

public:
    double res;
    double extra = 100;

    // chik_Pizza() { }

    virtual void compute_Cost(kitchen k){
        float tmp;
        this->res = 0;

        for(int i = 0; i < this->num; i++){
            tmp = k.get_Cost(ing_Qty[i].name);
            this->res = this->res + tmp * ing_Qty[i].qty;
        }

    } 

    virtual void print_P(){
        float area = pi * radius * radius;
        cout << fixed << setprecision(2) << area * res + extra << '\n';
    }

};

void kitchen::get_K(){
    cin >> num1;

    for(int i = 0; i < num1; i++){
        cin >> ing_Cost[i].name >> ing_Cost[i].price;
        ing_Cost[i].price /= 100;
    }
}

float kitchen::get_Cost(char * name){

    for(int i = 0; i < num1; i++){

        if(strcmp(name, ing_Cost[i].name) == 0){
            return ing_Cost[i].price;
        }
    }
    return -1;
}

float circle::area(){
    return pi * radius * radius;
}

void circle::get_C(){ }

void circle::print_C(){ }

int main()
{
	int ch;
	cin>>ch;
	if (ch==0)
	{
        //Create an oject for veg pizza
            veg_Pizza p;
        //get radius of circle(pizza)
        // get ingredients and quantity required for 1 square centimeter
        p.get_P();
        //get items in kitchen and their cost
        kitchen k;
        k.get_K();
        //compute cost
        p.compute_Cost(k);
        p.print_P();
	}
	else
	{
        if (ch==1)
        {
            chik_Pizza c;
            c.get_P();
            kitchen k1;
            k1.get_K();
            c.compute_Cost(k1);
            c.print_P();
        }
	}
}