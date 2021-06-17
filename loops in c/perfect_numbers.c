#include <stdio.h>
#include <math.h>
#include <string.h>

#define ll long long

int chk_perfect(ll n){
    ll div_sum = 0;

    ll end = n/2;

    for(ll i = 1; i < end + 1; i++){
        if (n % i == 0)
            div_sum += i;
    }

    if(div_sum == n)
        return 1;
    return  0;
}

int main() {
    ll n;
    printf("Enter a number : ");
    scanf("%lld", &n); 

    if(chk_perfect(n))
        printf("%d is a perfect number\n", n);
    else
        printf("%d is not a perfect number\n", n);

    return 0;
}