#include <iostream>
#include <iomanip>


int main(){
    int a, b;
    float c, d;
    
    std::cin >> a >> b >> c >> d;
    
    std::cout << a + b << ' ' << a - b << '\n';
    
    std::cout << std::fixed << std::setprecision(1) 
    << c + d << ' ' << c - d;
    
    return 0;
}