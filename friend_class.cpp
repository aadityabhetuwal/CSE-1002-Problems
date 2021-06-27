#include <iostream>
#include <vector>
#include <cmath>

#define ll long long
#define ull unsigned long long


using namespace std;

class classA{
    int num;
    friend class classB;

};

class classB{

public:
    int add(classA a){
        cin  >> a.num;
        
        return a.num;
    }
};

int main(){
    classA a;
    classB b;


    cout << b.add(a) << '\n';

    return 0;
}


