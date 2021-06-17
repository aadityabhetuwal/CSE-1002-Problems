#include<iostream>
#include<cstring>
using namespace std;
class set
{
	int num_Of_Ele;
	char names[30][20];
	public:
	void get();
	void print()const;
	set intersection(set&);
	set difference(set&);
};

void set::get(){
    // cout << "Yes1\n";
    cin >> num_Of_Ele;

    for(int i = 0; i < num_Of_Ele; i++){
        cin >> names[i];

    }
}

void set::print() const{
    
    for(int i = 0; i < num_Of_Ele; i++){
        if (i != num_Of_Ele - 1)
            cout << names[i] << ',';
        else
            cout << names[i];
    }
    cout << '\n';
}

set set::intersection(set &arr){
    set res;
    res.num_Of_Ele = 0;
    
    for(int i = 0; i < num_Of_Ele; i++){

        for(int j = 0; j < arr.num_Of_Ele; j++){
            if(strcmp(names[i], arr.names[j]) == 0){
                strcpy(res.names[res.num_Of_Ele++], names[i]);
            }
        }
    }

    return res;
} 

set set::difference(set &arr){
    set res;
    res.num_Of_Ele = 0;
    bool flag;
    char chk[20];

    for(int i = 0; i < num_Of_Ele; i++){
        flag = true;

        for(int j = 0; j < arr.num_Of_Ele; j++){
            
            if(strcmp(names[i], arr.names[j]) == 0){
                flag = false;
                break;
            }
        }

        if(flag){
            strcpy(res.names[res.num_Of_Ele++], names[i]);
        }
    }

    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	set chess, carrom, scrabble;
	chess.get();
	carrom.get();
	scrabble.get();
	set inter = chess.intersection(carrom);
	inter.print();
	set diff = inter.difference(scrabble);
	diff.print();
	return 0;
}