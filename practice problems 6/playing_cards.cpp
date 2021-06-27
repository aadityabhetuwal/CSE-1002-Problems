#include<iostream>
using namespace std;
#include<string>
class card
{
	char value;
	string suite;
	public:
	//Function to read the input values
	void read();
	//Check if the value in the two cards are same
	bool check_value(card);
	//Check if the suite in the two cards are same
	bool check_suite(card);
	//Print the color of the suite of the card
	void print_color_suite();
};

void card::read(){
    cin >> value >> suite;
}

bool card::check_value(card c){
    return value == c.value;
}

bool card::check_suite(card c){
    return suite == c.suite;
}

void card::print_color_suite(){

    if(suite == "diamond" || suite == "red")
        cout << "red\n";
    else
        cout << "black\n";
}

int main(){
    card *c1 = new card(), c2;

    c1->read();
    c2.read();

    if (c1->check_value(c2))
        cout << "Same value\n";
    else if (c1->check_suite(c2))
        cout << "Same suite\n";
    
    c1->print_color_suite();

    return 0;
}