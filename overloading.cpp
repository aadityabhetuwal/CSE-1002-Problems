#include <iostream>
#include <vector>
#include <cmath>

#define ll long long
#define ull unsigned long long

using namespace std;

int _max(int, int);
double _max(double, double);

int _max(int x, int y){
    return (x > y ? x : y);
}

double _max(double x, double y){
    return (x > y ? x : y);
}

int foo(int);
int foo(int, int);



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int (*fp)(int);
    fp = foo;

    cout << fp(5) << '\n';

    int (*fp1)(int, int);
    fp1 = foo;
    cout << fp1(4, 5) << '\n';

    return 0;
}

int foo(int a){
    return a;
}

int foo(int a, int b){
    return a + b;
}
