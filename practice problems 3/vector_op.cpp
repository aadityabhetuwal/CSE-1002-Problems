#include<iostream>

using namespace std;

class vector
{
	int num;
	int *ele;

public:

	vector();
	vector(int);
	vector(vector&);
	vector sum (vector&);
	int product(vector&);	
	void get();
	void print();
};

vector::vector(vector& ve){
	num = ve.num;
    ele = (int *) malloc(num * sizeof(int));
}

vector::vector(){
	num = 0;
	ele = (int *) malloc(num * sizeof(int));
}

vector::vector(int n){
	num = n;
	ele = (int *) malloc(num * sizeof(num));
}

void vector::get(){
    cin >> num;

    ele = new int[num];

    for(int i = 0; i < num; i++){
        cin >> ele[i];
    }

}

void vector::print(){

    for(int i = 0; i < num; i++){
        cout << ele[i] << '\n';
    }
}


vector vector::sum(vector& ve){
	vector res(ve);

	for(int i = 0; i < num; i++){
		res.ele[i] = ele[i] + ve.ele[i];
	}

    return res;
}

int vector::product(vector& ve){
    int prod = 0;

	for(int i = 0; i < num; i++){
		prod += (ele[i] * ve.ele[i]);
	}

	return prod;
}

int main()
{
	vector v1, v2, v3;
	int dot_Pdt;
	v1.get();
	v2.get();
	v3 = v1.sum(v2);
	v3.print();
	dot_Pdt = v1.product(v2);
	cout<<dot_Pdt;
}