#include <stdio.h>
#include <math.h>
#include <string.h>

#define ll long long

int main() {
    int n;
    printf("Enter a number  : ");
    scanf("%d", &n);

    int dig = floor(log10(n));
    printf("Number of digits : %d", dig + 1);

    return 0;
}


