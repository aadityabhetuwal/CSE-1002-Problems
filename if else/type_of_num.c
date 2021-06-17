#include <stdio.h>
#include <math.h>
#include <string.h>

#define ll long long


int main() {
    int n;
    scanf("%d", &n);

    if(n < 0)
        printf("%d is negative\n", n);
    else if (n > 0)
        printf("%d is positive\n", n);
    else
        printf("Given number is 0\n");

    return 0;
}