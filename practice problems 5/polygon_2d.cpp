#include<iostream>
#include<math.h>
#include<iomanip>
#include<exception>

//Declaration of classes
using namespace std;

struct point{

	double x;
	double y;
	point();
	void get();
	friend ostream& operator<<(ostream&,point);
};

class outofrange:public exception{

public:
	void what();

};

class polygon{

protected:
	int num_Of_Ver;
	point* vertices;
public:
	//initialize num_Of_Ver to 'n'
	//allocate memory to store points of 'n' vertices
	polygon(int n);
	~polygon();
	//get function cannot be defined here instead define in the derived class
	void get();
	//we return reference of the point so that assignment can be made
	point& operator[](int idx);
	double area();
};

class triangle : public polygon{
public:
	triangle():polygon(3){}
};

class quadrilateral : public polygon{
public:
	quadrilateral():polygon(4){}
};


ostream& operator <<(ostream& os, point p){
	os << p.x << '\t' << p.y;
	return os;
}

point& polygon::operator [](int idx){
	if(idx > num_Of_Ver)
		throw outofrange();
	
	return vertices[idx];
}

void outofrange::what(){
	cout << "Out of range\n";
}

polygon::polygon(int n){
	num_Of_Ver = n;
	vertices = (point *) malloc(num_Of_Ver * sizeof(point));

}

point::point() { }


void polygon::get(){

	vertices = (point *) malloc(num_Of_Ver * sizeof(point));

	for(int i = 0; i < num_Of_Ver; i++){
		cin >> vertices[i].x >> vertices[i].y;
	}

}

double polygon::area(){
	point p;
	double res = 0;

	for(int i = 0; i < num_Of_Ver; i++){


		if(i == num_Of_Ver - 1){
			res += (vertices[i].x * vertices[0].y - vertices[i].y * vertices[0].x);
		
		}else{
			res = res + (vertices[i].x * vertices[i + 1].y - vertices[i].y * vertices[i + 1].x);
		}
	}
	return abs(res/2);

}

polygon::~polygon(){
	free(vertices);	
}

int main()
{
	triangle t;
	int index;
	
	t.get();
	cout<<fixed<<setprecision(2)<<t.area()<<endl;
	quadrilateral r;
	r.get();
	cout<<fixed<<setprecision(2)<<r.area()<<endl;
	cin>>index;
	try
	{
	cout<<r[index];
	}catch(outofrange o)
	{
	o.what();
	}
}