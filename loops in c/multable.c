#include <stdio.h>
#include <math.h>
#include <string.h>

#define ll long long

int main() {
    int n;

    printf("Enter number to get multiplication table : ");
    scanf("%d", &n);

    for(int i = 0; i < 11; i++){
        printf("%d x %d = %ld\n", n, i, n * i);
    }

    return 0;
}