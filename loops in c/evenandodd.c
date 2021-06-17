#include <stdio.h>
#include <math.h>
#include <string.h>

#define ll long long

int main() {


    //print odd
    for(int i = 1; i < 100; i++){
        if(i % 2){
            printf("%d ", i);
        }
    }
    printf("\n");
    
    //print even
    for(int i = 1; i < 100; i++){
        if(i % 2 == 0){
            printf("%d ", i);
        }
    }

    return 0;
}