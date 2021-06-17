#include <stdio.h>
#include <math.h>
#include <string.h>

#define ll long long

void get_power(int n){
    int b;
    printf("Enter power to be found : ");
    scanf("%d", &b);

    ll res = 1;

    for(int i = 0; i < b; i++){
        res = res * n;
    }

    printf("%d raised to the power %d is = %lld\n", n, b, res);
}

void get_factos(int n){

    printf("The factors are = 1 ");
    int end = n/2;

    for(int i = 2; i < end + 1; i++){
        if(n % i == 0)
            printf("%d ", i);
    }

    printf("%d\n", n);
}

void get_factorial(int n){
    ll res = 1;

    for(int i = 2; i <= n; i++){
        res *= i;
    }

    printf("The factorial of %d is = %lld", n, res);
}


int main() {
    int n;
    printf("Enter a number  : ");
    scanf("%d", &n);

    // get_power(n);
    // get_factos(n);
    get_factorial(n);

    return 0;
}