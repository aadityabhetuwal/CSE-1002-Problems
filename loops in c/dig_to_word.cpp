#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <unordered_map>
#include <sstream>

#define ll long long

std::unordered_map<int, std::string> table = {
    {0, ""}, {1, "one "}, {2, "two "}, {3, "three "}, {4, "four "}, {5, "five "}, {6, "six "}, 
    {7, "seven "}, {8, "eight "}, {9, "nine "}
};

std::unordered_map<int, std::string> words_of_division = {
    {1, ""}, {2, "thousand"}, {3, "million"}, {4, "billion"}, {5, "trillion"}
};

std::unordered_map<int, std::string> tens = {
    {1, "ten "}, {2, "twenty "}, {3, "thirty "}, {4, "fourty "}, {5, "fifty "}, {6, "sixty "}, {7, "seventy "},
    {8, "eighty "}, {9, "ninety "}
};

int max_div;

std::string word_maker(std::string st, int divisions){

    std::string tmp = (divisions == 1 && max_div != 1) ? "and " : "";
    int ans = stoi(st);

    st = std::to_string(ans);

    if(st.size() == 3){
        tmp += table[st[0] - '0'] + "hundred " ;

        if(st[1] == '1' && st[2] == '0'){
            tmp += "ten " + words_of_division[divisions] ;

        }else if(st[1] != '0'){
            tmp += tens[st[1] - '0'] + table[st[2] - '0'] + words_of_division[divisions];

        }else {
            tmp += table[st[2] - '0'] + words_of_division[divisions];
        }

    }else if (st.size() == 2){

        if(st[0] == '1' && st[1] == '0'){
            tmp += "ten " + words_of_division[divisions];
        }else {
            tmp += tens[st[0] - '0'] + table[st[1] - '0'] + words_of_division[divisions];
        }

    }else if (st.size() == 1){
        tmp += table[st[0] - '0'] + words_of_division[divisions];
    }

    if(divisions > 1)
        tmp += ", ";

    return tmp;
}

std::string get_words(int n){
    int divisions;

    int counter = 0;
    std::string sep, tmp, res = "";

    while(n){
        sep = std::to_string(n % 10) + sep;

        if(counter == 2){
            sep = " " + sep;
            counter = -1;   
        }
        
        counter++;
        n /= 10;
    }

    std::stringstream ss(sep);
    std::vector<std::string> divided;

    while(std::getline(ss, tmp, ' ')){

        if(tmp.size() != 0){
            divided.push_back(tmp);
        }
    }

    divisions = divided.size();
    max_div = divisions;

    for(auto i : divided){
        tmp = word_maker(i, divisions);
        res += tmp;

        divisions--;
    }

    return res;
}

int main(){
    ll n;
    std::cout << "Enter a number : ";

    std::cin >> n;
    
    std::cout << "The number in words is : " << get_words(n) << '\n';
    return 0;
}


