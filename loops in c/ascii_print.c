#include <stdio.h>
#include <math.h>
#include <string.h>

#define ll long long


int main() {
    //only standard ascii ie till 0 to 128
    for(int i = 0; i <= 128; i++){
        printf("%d has ASCII character = %c\n", i, i); // blank not printable
    }


    return 0;
}