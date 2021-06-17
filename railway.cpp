#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <cctype>
#include <algorithm>


using namespace std;

string grade;

class Person{

public:
    string name;
    string gender;
    long int MobileNo;

    void get(){

        cout << "Enter name : "; 
        getline(cin, name);
        cout << "Enter gender M/F : ";
        getline(cin, gender);
        cout << "Enter mobile numebr : ";
        cin >> MobileNo;
        
        put();
    }

    void put(){
        
        // not necessary initializer inside class

        // this->name = name;
        // this->gender = gender;
        // this->MobileNo = MobileNo;
    }

};

class Employee : public Person{

public:

    long int id;
    string desig;
    long int dob;
    long int hra;
    string dept;
    string gradeofEmployee;
    
    double Sal;

    Employee(){
        this->Sal = 0;
    }
   

    void get(){

        cout << "Enter employee id : ";
        cin >> this->id;
        cout << "Enter designation : ";
        cin >> this->desig;
        cout << "Enter date of birth : ";
        cin >> this->dob;
        cout << "Enter HRA(Home Rental Allowance) : ";
        cin >> this->hra;
        cout << "Enter depeartment : ";
        cin >> this->dept;

        this->gradeofEmployee = grade;

        put();
    }

    void put(){
        
        // initialized inside get() no need of put()

        transform(begin(this->gradeofEmployee), end(this->gradeofEmployee), begin(this->gradeofEmployee),
            [](unsigned char c) {return tolower(c); } );
    }

    virtual void computeSal() = 0;

};

class RegualarEmployee : public Employee {

public:
    long int basic;
    long int da;

    RegualarEmployee(){
        get();
        // this->basic = 0;
        // this->da = 0;
    }

    void get(){
        int ba, dearness;

        cout << "Enter basic amount : ";
        cin >> ba;
        cout << "Enter dearness allowance : ";
        cin >> dearness;

        this->basic = ba;
        this->da = dearness;
    }

    virtual void computeSal(){

        this->Sal = this->basic + this->hra + this-> da;
    }
};

class DailywagesEmployee : public Employee{

public:
    void *noOfHours;
    int wagesPerHour;

    DailywagesEmployee(){
        get();
    }

    void get(){
        int h, w;

        cout << "Enter number of hours : ";
        cin >> h;
        cout << "Enter wage per hour : ";
        cin >> w;

        this->noOfHours = (void *)&h;
        this->wagesPerHour = w;
    }

    virtual void computeSal(){

        this->Sal = *(static_cast<int*>(this->noOfHours)) * this->wagesPerHour;
    } 

};

class consolidatedEmployee : public Employee {

public:
    int amount;

    consolidatedEmployee(){
        this->amount = 0;
    }

    void get(){
        int am;
        cout << "Enter fixed amount : ";
        cin >> am;

        this->amount = am;
    }

    virtual void computeSal(){

        this->Sal = this->amount;
    }

};

int main(){
    Person p1;
    p1.get();

    // regular employee = r
    // consolidared employee = c
    // daily wage employee = d

    cout << "Enter grade of employee \n r - regular employee \n c - consolidared employee\n d - daily wage employee\n";
    cin >> grade;


    if(grade == "r"){
        Employee *emp = new RegualarEmployee();
        emp->get();
        emp->computeSal();
        cout << "The salary of the Employee is : " << emp->Sal;
    }else if (grade == "c"){
        Employee *emp = new consolidatedEmployee();
        emp->get();
        emp->computeSal();
        cout << "The salary of the Employee is : " << emp->Sal;

    }else if (grade == "d"){
        Employee *emp = new DailywagesEmployee();
        emp->get();
        emp->computeSal();
        cout << "The salary of the Employee is : " << emp->Sal;
    }

    return 0;
}


