#include <iostream>
#include <cmath>

bool chk_prime(int n){
    if(n == 2 || n == 3)
        return true;

    int end = ceil(sqrt(n));

    for(int i = 2; i <= end + 1; i++){
        if(n % i == 0)
            return false;
    }
    return true;
}

int main(){
    int n;

    std::cout << "Enter number of primes to be found : ";
    std::cin >> n;

    std::cout << "First " << n << "prime numbers are :\n";

    long long i = 2;
    int count = 0;

    while(count <= n){
        if(chk_prime(i)){
            std::cout << i << '\n';
            count++;
        }
        i++;
    }

    return 0;
}


