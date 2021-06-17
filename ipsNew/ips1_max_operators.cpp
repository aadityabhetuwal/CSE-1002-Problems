#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int get_max_op(int k, int max_so_far, int num){

    if (num < k && num > max_so_far){
        return num;
    }
    return max_so_far;
}

void calculate_the_maximum(int n, int k) {
    //Write your code here.
    int and_op, or_op, xor_op; 
    int a, b;

    int max_and = 0, max_or = 0, max_xor = 0;


    for(int i = 1; i <= n; i++){

        for(int j = i + 1; j <= n; j++){
            
            and_op = i & j;
            or_op = i | j;
            xor_op = i ^ j;

            max_and = get_max_op(k, max_and, and_op);
            max_or = get_max_op(k, max_or, or_op);
            max_xor = get_max_op(k, max_xor, xor_op);
        }
    }

    printf("%d \n%d \n%d", max_and, max_or, max_xor);

    return;
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}