#include<iostream>
#include<iomanip>
using namespace std;

class college_Appln
{
protected:
	int appln_No;
	char name[30];
	int age;
	float marks[6];
public:
	void get();
	void print();
};

class arts_Appln:public college_Appln
{	
	float entrance;
	float cutoff;
public:
	void calc_Cutoff();
	void print();
};

class engg_Appln:public college_Appln
{	
	float cutoff;	
	float entrance;
public:
	void get();
	void print();
	void calc_Cutoff();
};

void college_Appln::get(){
    cin >> appln_No;
    cin >> name;
    cin >> age;

    for(int i = 0; i < 6; i++)
        cin >> marks[i];
    
}

void arts_Appln::calc_Cutoff(){
    cutoff = 0;

    for(int i = 0; i < 6; i++){
        cutoff += marks[i];
    }
    cutoff /= 6;

}

void arts_Appln::print(){
    cout << name << '\n' << fixed << setprecision(2) << cutoff << '\n';
}

void engg_Appln::get(){
    cin >> appln_No;
    cin >> name;
    cin >> age;

    for(int i = 0; i < 6; i++)
        cin >> marks[i];
    
    cin >> entrance;

}

void engg_Appln::calc_Cutoff(){
    cutoff = 0;

    for(int i = 2; i < 5; i++)
        cutoff += marks[i];
    
    cutoff /= 3;
    cutoff += entrance;

}

void engg_Appln::print(){
    cout << name << '\n' << fixed << setprecision(2) << cutoff << '\n';
}

int main()
{
	int ch;
	cin>>ch;
	if(ch==0)
	{
        arts_Appln a;
        a.get();
        a.calc_Cutoff();
        a.print();
	}
	else
	{
        engg_Appln e;
        e.get();
        e.calc_Cutoff();
        e.print();
	}
}
