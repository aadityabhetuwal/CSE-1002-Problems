#include <stdio.h>
#include <math.h>
#include <string.h>

#define ll long long


int main() {
    const int n = 100;

    int all_sum = 0, even_sum = 0, odd_sum = 0;

    //all_sum = (n*(n + 1))/2;

    for(int i = 1; i <= n; i++){
        all_sum += i;

        if(i % 2)
            odd_sum += i;
        else
            even_sum += i;
    }
    
    printf("Total sum : %d\nEven sum : %d\nOdd sum : %d\n", all_sum, even_sum, odd_sum);
    return 0;
}