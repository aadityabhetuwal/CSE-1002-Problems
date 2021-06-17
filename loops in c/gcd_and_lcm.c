#include <stdio.h>
#include <math.h>
#include <string.h>

#define ll long long

int get_gcd(int a, int b){
    int div = b;
    int term = a, tmp;

    while(term % div != 0){
        tmp = div;
        div = term % div;
        term = tmp;

    }
    
    return div;
}

ll get_lcm(int a, int b){
    int _gcd = get_gcd(a, b);

    ll lcm = (a * b) / _gcd;

    return lcm;
}

int main() {
    int a, b;
    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);

    printf("The gcd of %d and %d is = %d\n", a, b, get_gcd(a, b));
    printf("The LCM of %d an %d is = %lld\n", a, b, get_lcm(a, b));

    return 0;
}