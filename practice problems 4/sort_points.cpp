#include<iostream>
using namespace std;

class point
{
	int x,y;
	public:
	friend istream& operator>>(istream&,point&);
	friend ostream& operator<<(ostream&,point&);
	bool operator == (point&);
	bool operator > (point&);
};


istream& operator >>(istream& is, point& p){
    is >> p.x >> p.y;
    return is;
}

ostream& operator <<(ostream& os, point& p){
    os << p.x << '\t' << p.y << " \n";
    return os;
}

bool point::operator ==(point& p1){
    return (x == p1.x) && (y == p1.y);
}

bool point::operator >(point& p1){
    if(x != p1.x){
        return x < p1.x;
    }
    return y < p1.y;
}

void sort_Points(point* p, int n){
    int j;
    point tmp;

    for(int i = 1; i < n; i++){
        j = i - 1;
        tmp = p[i];
        
        while(j >= 0  && p[j] > tmp){
            p[j + 1] = p[j];
            j--;
        }

        p[j + 1] = tmp;
    }
}

main()
{
	point p[20];
	int i,n;
	cin>>n;
	for(i=0;i<n;i++)
	cin>>p[i];
	sort_Points(p,n);
	for(i=0;i<n;i++)
	cout<<p[i];
}