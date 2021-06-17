#include <stdio.h>
#include <math.h>
#include <string.h>

#define ll long long


int main() {
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
        printf("%d ", i);

    printf("\n");

    for(int i = n; i > 0; i--)
        printf("%d ", i);

    return 0;
}