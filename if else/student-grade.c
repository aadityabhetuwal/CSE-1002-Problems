#include <stdio.h>
#include <math.h>
#include <string.h>

#define ll long long


int main() {
    float per;
    scanf("%f", &per);

    char grade = 'F';

    if(per >= 90 && per <= 100)
        grade = 'A';
    else if (per >= 80)
        grade = 'B';
    else if (per >= 70)
        grade = 'C';
    else if (per >= 60)
        grade = 'D';
    else if (per >= 40)
        grade = 'E';
    
    printf("The grade received = %c", grade);

    return 0;
}