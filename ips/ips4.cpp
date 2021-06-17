#include <iostream>
#include <cmath>

void print_details(){
    std::cout << "Name : Aaditya Bhetuwal\nRegd. No. : 20BDS0406\nInstitute : Vellore Institute of Technology\n";
    std::cout << "Official Address : Vellore, Tamil Nadu\nResidential Adress : Kathmandu, Nepal\n";
}

void print_integer(){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("The given number : %d\n", n);
}

void area_circle(){
    const float pi = 3.1415f;
    float r;

    printf("Enter radius of circle : ");
    scanf("%f", &r);

    float area = pi * r * r;

    printf("Area of circle is %f\n", area);
}

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


void print_primes(){
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

    std::cout << '\n';
}

void max_of_three(){
    float a, b, c;
    std::cout << "Enter three numbers : ";
    std::cin >> a >> b >> c;

    float _max = (a < b) ? ((b < c) ? c : b) : ((c < a) ? a : c);

    std::cout << "The maximum of three numbers is : " << _max << '\n';
}

int main() {
    print_details();
    
    print_integer();

    area_circle();

    print_primes();

    max_of_three();

    return 0;
    
}