#include <iostream>
#include <vector>
#include <cmath>

#define ll long long
#define ull unsigned long long


using namespace std;

class Employee{

public:
    string name, id;
    int age;

    Employee(){
        cin >> name >> id >> age;


    }

    bool check_age(){
        if(age < 18)
            throw 1;
        else if(age > 50)
            throw 'c';
        
        return 1;
    }


    void print(){

        try{
            bool test = check_age();
            cout << name << '\n' << id << '\n' << age << '\n';

        }catch(const int i){
            cout << "Age cannot be less than 18\n";
        }catch(const char c){
            cout << "Age cannot be greater than 50\n";
        }
    }
};


int main(){
    Employee *emp = new Employee();

    emp->print();

    return 0;
}


