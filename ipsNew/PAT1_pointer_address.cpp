#include <iostream>
#include <vector>
#include <cmath>

#define ll long long
#define ull unsigned long long


using namespace std;

int main(){
    int x = 100;
    int *y = &x;
    char ch = 'z';

    cout << "Using & operator : \n";
    cout << "Address of x : " << &x << '\n';
    cout << "Address of y : " << &y << '\n';
    cout << "Address of ch : " << (void *) &ch << '\n';

    cout << "Using *(derefrencing) operator : \n";
    cout << "Value of x : " << x << '\n';
    cout << "Value of y : " << *y << '\n';
    cout << "Value of y : " << ch << '\n';


    return 0;
}


