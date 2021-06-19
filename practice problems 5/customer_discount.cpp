#include <iostream>
#include <vector>
#include <cmath>

#define ll long long
#define ull unsigned long long


using namespace std;


class customer{

public:
    string name;
    ll mob;
    string address;
    int id;
    int num;
    int *bills;

    customer() { }

    virtual ~customer(){ free(bills);}

    void get();
    virtual float calc_Total();

};


class preferred_Customer : public customer{

public:

    float calc_Total() override;
};


void customer::get(){
    cin >> name;
    cin >> mob;
    cin >> address;
    cin >> id >> num;
    
    bills = (int *) malloc(num * sizeof(int));

    for(int i = 0; i < num; i++){
        cin >> bills[i];
    }

}

float get_rate(int pri){
    float res = 0;

    if(pri >= 20000){
        res = 0.04;
    }else if(pri >= 15000){
        res = 0.03;
    }else if(pri >= 10000){
        res = 0.02;
    }else if(pri >= 5000){
        res = 0.01;
    }

    return res;
}

float customer::calc_Total(){
    float res = 0;

    for(int i = 0; i < num; i++){
        res += bills[i];        
    }
    return res;
}

float preferred_Customer::calc_Total(){
    float res = 0;
    float dis;
    float sum = 0;

    for(int i = 0; i < num; i++){
        sum += bills[i];
        dis = get_rate(sum);
        res += (bills[i] - dis * bills[i]); 
     
    }

    return res;
}

int main()
{
	int ch;
	//get choice of customer
	cin>>ch;
	if(ch==0)
	{
        customer c1;
        //get the details of customer
        c1.get();
        //calculate total amount to be paid
        //develop a function in customer class that will calculate 
        // the total amount and return it
        cout<<c1.calc_Total();
	}
	else
	{
        //preferred customer
        preferred_Customer pc;
        //get details
        pc.get();
        //function should calculate and return total amount
        cout<<pc.calc_Total();
	}
}


