#include <stdio.h>
#include <math.h>
#include <string.h>

#define ll long long


int main() {
    int n;
    scanf("%d", &n);

    if(n % 4 == 0 && n % 100)
        printf("The year %d was leap\n", n);
    else if (n % 100 == 0 && n % 400 == 0)
        printf("The year %d was leap\n", n);
    else
        printf("The year %d was not leap\n", n);

    return 0;
}