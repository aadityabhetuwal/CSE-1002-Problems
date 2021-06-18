#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const float pi = 3.14f;

double area(float l, float b){
    return l*b;
}

double area(float r){
    return (pi * pow(r, 2));
}

double area(float top, float bot, float hei){
    return ((hei * (top + bot))/2);
}

int main()
{
	float len,bre,top,bottom,height,radius;
	double a;
	cin>>len>>bre;
	a = area(len,bre);
	cout<<fixed<<setprecision(2)<<a<<endl;
	cin>>top>>bottom>>height;
	a = area(top,bottom,height);
	cout<<fixed<<setprecision(2)<<a<<endl;
	cin>>radius;
	a = area(radius);
	cout<<fixed<<setprecision(2)<<a<<endl;
}