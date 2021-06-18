#include<iostream>
using namespace std;


class vector
{
	int num;
	int ele[20];
	public:
	friend istream& operator>>(istream&,vector&);
	friend ostream& operator<<(ostream&,vector&);
	vector operator+(vector&);
	vector operator-(vector&);
	int operator[](int);
};

void chk(int num1, int num2){

    if(num1 != num2)
        throw "n";
    
}

istream& operator >>(istream& is, vector& ve){
    is >> ve.num;

    for(int i = 0; i < ve.num; i++){
        is >> ve.ele[i];    
    }
    return is;
};

ostream& operator <<(ostream& os, vector& ve){

    for(int i = 0; i < ve.num; i++){
        os << ve.ele[i] << '\n';
    }
    return os;
}

vector vector::operator +(vector& ve){
    vector res;
    res.num = 0;
    
    try{
        chk(num, ve.num);

    }catch(const string s){
        cout << "Vectors of different dimension cannot be added";
        return res;
    }

    for(int i = 0; i < num; i++){
        res.ele[res.num++] = ele[i] + ve.ele[i];
    }
    return res;
}

vector vector::operator -(vector& ve){
    vector res;
    res.num = 0;
    
    try{
        chk(num, ve.num);

    }catch(const string s){
        cout << "Vectors of different dimension cannot be added";
        return res;
    }

    for(int i = 0; i < num; i++){
        res.ele[res.num++] = ele[i] - ve.ele[i];
    }

    return res;
}

int vector::operator [](int i){
    return ele[i - 1];
}


int main()
{
	vector v1,v2,v3;
	int i,j;
	cin>>v1;
	cin>>v2;
	cin>>i;
	cin>>j;
	cout<<v1[i]<<endl;
	cout<<v2[j]<<endl;
	v3 = v1+v2;
	cout<<v3;
	v3 = v1 - v2;
	cout<<v3;
}