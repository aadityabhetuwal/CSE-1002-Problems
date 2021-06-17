#include <stdio.h>
#include <math.h>
#include <string.h>

#define ll long long

int chk_prime(int n, int *arr, int *j){
    if(n == 2 || n == 3)
        return 1;

    int end = ceil(sqrt(n));

    for(int i = 2; i <= end + 1; i++){
        if(n % i == 0)
            return 0;
    }
    *(arr + *j) = n;
    *j = *j + 1;

    return 1;
}

void sum_of_primes(int n, int *arr, int *j){
    ll _sum = 0;

    for(int i = 0; i < *j; i++){
        _sum += *(arr + i);
    }

    printf("The sum of primes from 1 to %d is = %lld\n", n, _sum);

}

void get_prime_factors(){
    ll n;
    printf("Enter a number  : ");
    scanf("%lld", &n);

    int arr[n];
    arr[0] = 2;
    arr[1] = 3;
    int j = 2, tmp;

    for(int i = 2; i <= n; i++){
        tmp = chk_prime(i, arr, &j);
    }

    printf("The prime factors of %d are : \n", n);

    for(int i = 0; i < j; i++){
        if(n % arr[i] == 0){
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

}

void check_prime(){
    int n;
    printf("Enter a number  : ");
    scanf("%d", &n);
    
    int arr[n];
    arr[0] = 2;
    arr[1] = 3;
    int j = 2;

    if(chk_prime(n, arr, &j)){
        printf("%d is prime\n", n);
    }else{
        printf("%d is not prime\n", n);
    }

}

void check_till_n(){
    int n;
    printf("Enter a number  : ");
    scanf("%d", &n);
    
    int arr[n];
    arr[0] = 2;
    arr[1] = 3;
    int j = 2;
    int tmp;
    
    printf("The prime numbers between 1 to %d are : ", n);

    for(int i = 2; i <= n; i++){
        if(chk_prime(i, arr, &j))
            printf("%d ", i);
    }
    printf("\n");
}

void sum_of_primes_helper(){
    int n;
    printf("Enter a number  : ");
    scanf("%d", &n);
    
    int arr[n];
    arr[0] = 2;
    arr[1] = 3;
    int j = 2;
    int tmp;

    for(int i = 2; i <= n; i++){
        tmp = chk_prime(i, arr, &j);
    }

    sum_of_primes(n, arr, &j);

}

int main() {
    // check_prime();
    // check_till_n();

    // sum_of_primes_helper();
    get_prime_factors();


    return 0;   
}