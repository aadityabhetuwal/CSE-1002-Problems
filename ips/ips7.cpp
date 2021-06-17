#include <iostream>

int main(){
    float tmp;
    std::cin >> tmp;
    
    if(tmp < 0)
        std::cout << "Freezing weather\n";
    else if (tmp < 10)
        std::cout << "Very Cold weather\n";
    else if (tmp < 20)
        std::cout << "Cold weather\n";
    else if (tmp < 30)
        std::cout << "Normal in Temp\n";
    else if (tmp < 40)
        std::cout << "Its weather\n";
    else
        std::cout << "Its very hot.\n";
        
    return 0;
}