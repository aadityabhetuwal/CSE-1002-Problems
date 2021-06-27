#include <iostream>

using namespace std;

class Distance {
    private:
        int meter;
        
        // friend function
        friend int addFive(Distance);
    public:
        Distance() { }

        Distance(int x) {meter = x;}

};

int addFive(Distance d){
    d.meter += 5;

    cout << "Distance : " << d.meter << '\n';
}

int main(){
    Distance d(0);
    addFive(d);
    
    return 0;
}


