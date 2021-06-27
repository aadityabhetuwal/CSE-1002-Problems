#include<iostream>
using namespace std;
//Function to find weekday number
// 0 - Sunday, 1 - Monday and so on 6-Saturday
int find_day(int n);
//Given a character array of size 5 with subject letter print the name of the subject corressponding to position i
void print_first_hour(char* sub, int i);
//Function to check if given Saturday is an even Saturday
bool check_Even_Sat(int d);
// Function to find odd Saturday number, odd Saturday number of day 6 is 1, day 20 is 2 and so on
int find_Odd_Sat_Num(int d);

int find_day(int n){
    return n % 7;
}

bool check_Even_Sat(int d){
    return ((d % 2) ? 1 : 0);
}

int find_Odd_Sat_Num(int d){
    return (d / 14 + 1);    
}

void print_first_hour(char* sub, int i){
    char tmp = sub[i - 1];

    switch (tmp){
        case 'P':
            cout << "Physics\n";
            break;;
        case 'C':
            cout << "Chemistry\n";
            break;
        case 'M':
            cout << "Maths\n";
            break;
        case 'R':
            cout << "Computer Science\n";
            break;
        default:
            cout << "English\n";
    }
}


int main(){
    int n;


    char sub[6];
    
    for(int i = 0; i < 5; i++){
        cin >> sub[i];
    }
    cin >> n;

    int day = find_day(n);

    if(day == 0){
        cout << "Holiday\n";
        return 0;
    }

    if(day == 6){
        if(check_Even_Sat(n)){
            cout << "Holiday\n";
        }else{
            int sat_day = find_Odd_Sat_Num(n);
            print_first_hour(sub, sat_day % 5);
        }
    }else{
        print_first_hour(sub, day);
    }

    return 0;
}