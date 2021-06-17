#include <stdio.h>
#include <math.h>
#include <string.h>

#define ll long long

int chk_armstrong(ll n){
    ll a = n;
    ll res = 0;
    int dig;
    ll _add;

    while(n){
        dig = n % 10;
        _add = pow(dig, 3);
        res += _add;
        n /= 10;
    }

    if(res == a)
        return 1;
    return 0;
}

void chk_armstrong_helper(){
    ll n;
    printf("Enter a number : ");
    scanf("%lld", &n);
    
    if(chk_armstrong(n))
        printf("%d is armstrong\n", n);
    else
        printf("%d is not armstrong\n", n);

}

void armstrong_till_n(){
    ll n;
    printf("Enter a number : ");
    scanf("%lld", &n); 

    printf("The armstrong numbers from 1 to %d are : ", n);

    for(int i = 1; i <= n; i++){
        if(chk_armstrong(i))
            printf("%d ", i);
    }
}

int main() {
    chk_armstrong_helper();

    armstrong_till_n();


    return 0;
}