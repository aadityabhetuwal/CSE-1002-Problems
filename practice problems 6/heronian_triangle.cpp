#include<iostream>
using namespace std;
#include<iomanip>
#include<math.h>

class triangle
{	
	int a;
	int b;
	int c;
	double area;
	int perimeter;
	public:
	//function to read data members of class
	void read();
	//function to calculate area
	void compute_area();
	//function to calculate perimeter
	void compute_perimeter();
	//function to check if the triangle is Heronian
	bool is_Heronian();
	//function to print perimeter of triangle
	void print_perimeter();
	//function to print area of triangle
	void print_area();
	
};

void triangle::read() {cin >> a >> b >> c; }

void triangle::compute_perimeter(){
    perimeter = a + b + c;
}

void triangle::print_perimeter(){
    cout << perimeter << '\n';
}

void triangle::compute_area(){
    double s = (double)perimeter/2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
}

void triangle::print_area(){
    if(area != (long long) area)
        cout << fixed << setprecision(2) << area << '\n';
    else
        cout << area << '\n';
}

bool triangle::is_Heronian(){

    if(area == (long long) area){
        return 1; 
    }
    return 0;
}

int main()
{
	triangle t;
	t.read();
	t.compute_perimeter();
	t.print_perimeter();
	t.compute_area();	
	t.print_area();
	if(t.is_Heronian())
	cout<<"Yes";
	else
	cout<<"No";
}