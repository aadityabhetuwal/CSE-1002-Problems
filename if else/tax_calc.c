#include <stdio.h>
#include <math.h>
#include <string.h>

#define ll long long

#define bracket1 400000.0f
#define bracket2 500000.0f
#define bracket3 700000.0f
#define bracket4 2000000.0f


int main() {
    double n;
    printf("Enter amount to calculate tax amount\n");
    scanf("%lf", &n);

    double tax_amt;

    if(n < bracket1){
        tax_amt = 0.01 * n;
    }else if(n < bracket2){
        tax_amt = (n - bracket1) * 0.1 + bracket1 * 0.1;

    }else if (n < bracket3){
        tax_amt = (n - bracket2) * 0.2 + (bracket2 - bracket1) * 0.1 + bracket1 * 0.01;

    }else if (n < bracket4){
        tax_amt = (n - bracket3) * 0.3 + (bracket3 - bracket2) * 0.2 + (bracket2 - bracket1) * 0.1 + bracket1 * 0.01;

    }else if (n > bracket4){
        tax_amt = (n - bracket4) * 0.36 + (bracket4 - bracket3) * 0.3 + (bracket3 - bracket2) * 0.2
                 + (bracket2 - bracket1) * 0.1 + bracket1 * 0.01;
    }

    printf("The tax amoutnt for income tax %lf is = %lf", n, tax_amt);

    return 0;
}