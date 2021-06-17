#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <limits.h>

void get_min_max(int *arr, int n,int *m, int *M){
    
    *m = INT_MAX;
    *M = INT_MIN;
    
    for(int i = 0; i < n; i++){
        if(arr[i] > *M){
            *M = arr[i];
        }
        
        if(arr[i] < *m){
            *m = arr[i];
        }
    }
    
    return;
}

int main(){
    int n;
    scanf("%d", &n);
    
    int *arr = (int *) malloc(n * sizeof(int));
    
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    int _min, _max;
    
    std::cout << &arr << ' ' << (arr + 0) << '\n';

    // get_min_max(arr, n, &_min, &_max);
    
    // printf("%d\n%d", _min, _max);
}