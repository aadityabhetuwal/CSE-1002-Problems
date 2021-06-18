#include <iostream>
#include <vector>
#include <string>
#include <cmath>

#define ll long long
#define ull unsigned long long


using namespace std;

class BoardPass {

public:
    string name;
    string pass_no;
    int age;
    string address;
    string flight_date;
    long long mob;
    int fare;

    BoardPass(){ };

    void get_input();
    void print() const;
};

void BoardPass::get_input(){
    cin >> name >> pass_no;
    cin >> age;
    cin >> address;
    cin >> flight_date;
    cin >> mob >> fare;

}

void BoardPass::print() const{

    cout << name << '\n';
    cout << "CA" + pass_no << '\n' << age << '\n';
    cout << flight_date << '\n' << mob << '\n' << fare << '\n';
}

void discount(BoardPass& pass){

    if(pass.age < 12){
        pass.fare -= (.5 * pass.fare);
    } else if (pass.age <= 58){
        pass.fare -= (.2 * pass.fare);
    }else if(pass.age > 58){
        pass.fare -= (.4 * pass.fare);
    }

}

int main(){
    BoardPass pass;

    pass.get_input();

    discount(pass);

    pass.print();

    return 0;
}


