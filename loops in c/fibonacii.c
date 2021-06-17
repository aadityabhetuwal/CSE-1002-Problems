#include <stdio.h>
#include <math.h>
#include <string.h>

#define ll long long

void fibo(int i, unsigned long long *arr){
    *(arr + i) = *(arr + i - 1) + *(arr + i - 2);
}

int main() {
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    unsigned long long arr[n];
    arr[0] = 0;
    arr[1] = 1;
    arr[2] = 1;

    printf("The fibonacci series upto %d terms : ", n);

    for(int i = 0; i < n; i++){
        if(i <= 2){
            printf("%lld ", arr[i]);
            continue;
        }

        fibo(i, arr);

        printf("%lld ", arr[i]);
    }
    return 0;
}