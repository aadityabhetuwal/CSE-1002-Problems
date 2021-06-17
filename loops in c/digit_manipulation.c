#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

#define ll long long

void first_last_dig(int n){
    int last = n % 10;

    while(n > 9)
        n /= 10;
    
    int first = n;

    printf("First digit : %d\nLast Digit : %d\n", first, last);
    return;
}


void sum_first_last(int n){
    int last = n % 10;

    while(n > 9)
        n /= 10;
    int first = n;

    printf("Sum of first and last = %d\n", first + last);

}

void swap_first_last(int n){
    int tmp = n;
    int last = n % 10;

    while(n > 9)
        n /= 10;
    
    int first = n;
    int b = 1;

    int res = first, dig, factor;
    tmp /= 10;

    while(tmp > 9){
        dig = tmp % 10;
        factor = pow(10, b++);
        res = res + dig * factor;
        tmp /= 10;
    }
    factor = pow(10, b);
    res = res + last * factor;
    
    printf("The first and last digit swapped is = %d\n", res);

}

void sum_of_digs(int n){
    ll res = 0;

    while(n){
        res += (n % 10);
        n /= 10;
    }

    printf("The sum of digits is = %lld\n", res);
}

void prod_of_digs(int n){
    ll res = 1;

    while(n){
        res *= (n % 10);
        n /= 10;
    }

    printf("The product of digits is = %lld\n", res);
}

int reverse(int n){
    int res = 0;

    while(n){
        res = res * 10 + n % 10;
        n /= 10;
    }

    return res;
}

void check_palindrome(int n){
    int res = reverse(n);

    if(res == n)
        printf("%d is palindrome\n", n);
    else
        printf("%d is not palindrome\n", n);

}

void frequency_of_digits(int n){
    int arr[10];
    memset(arr, 0, sizeof(arr));

    int dig;

    while(n){
        dig = n % 10;
        arr[dig] += 1;
        n /= 10;
    }

    printf("The number of occurences for each digit is : \n");

    for(int i = 0; i < 10; i++){
        if(arr[i])
            printf("%d has %d occurences\n", i, arr[i]);
    }

}   

int main() {
    int n;
    printf("Enter a number  : ");
    scanf("%d", &n);

    // first_last_dig(n);
    // sum_first_last(n);
    // swap_first_last(n);
    // sum_of_digs(n);
    // prod_of_digs(n);

    // printf("The reverse of given number is = %d", reverse(n));
    // check_palindrome(n);
    frequency_of_digits(n);

    return 0;
}