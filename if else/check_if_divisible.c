#include <stdio.h>
#include <math.h>
#include <string.h>

#define ll long long


int main() {
    int n;
    scanf("%d", &n);

    if(n % 2)  
        printf("%d is odd\n", n);
    else
        printf("%d is even\n", n);
    
    if(n % 5 == 0)
        printf("%d is divisible by 5\n", n);
    else
        printf("%d is not divisible by 5\n", n);

    if(n % 11 == 0)
        printf("%d is divisible by 11\n", n);
    else
        printf("%d is not divisible by 11\n", n);

    
    return 0;
}