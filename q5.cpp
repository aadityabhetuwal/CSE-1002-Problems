#include <iostream>

#define MAX(a, b) ((a > b) ? (a) : (b))
#define MAX3(a, b, c) (MAX(MAX(a, b), c))


int main(){
    float a, b, c;
    std::cout << "Enter three numbers : ";
    std::cin >> a >> b >> c;

    float _max = (a < b) ? ((b < c) ? c : b) : ((c < a) ? a : c);

    std::cout << "The maximum of three numbers is : " << _max << '\n';
    
    // std::cout << "The maximum of three numbers is : " << MAX3(a, b, c) << '\n';

    return 0;
}


