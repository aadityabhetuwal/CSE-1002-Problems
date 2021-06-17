#include <stdio.h>
#include <math.h>
#include <string.h>

#define ll long long

void valid_angles(){
    float a, b, c;
    printf("Enter the angles of triangle : ");
    scanf("%f %f %f", &a, &b, &c);

    float tot = a + b + c;

    if(a != 0 && b != 0 && c != 0 && abs(tot - 180) < 0.0001f)
        printf("Valid angles\n");
    else
        printf("Invalid angles\n");
    
}

void valid_sides(){
    float a, b, c;
    printf("Enter the sides of triangle : ");
    scanf("%f %f %f", &a, &b, &c);

    if(a + b > c && a + c > b && b + c > a)
        printf("Valid sides\n");
    else
        printf("Invalid sides\n");
    
}

void check_sides(){
    float a, b, c;
    printf("Enter the sides of triangle : ");
    scanf("%f %f %f", &a, &b, &c);

    if(a == b && b == c)
        printf("Given equilateral triangle\n");
    else if ((a == b && b != c) || (b == c && a != c ) || (a == c && b != c))
        printf("Given isoceles triangle\n");
    else
        printf("Given scalar triangle\n");

}

int main() {
    // valid_angles();
    // valid_sides();
    check_sides();

    return 0;
}