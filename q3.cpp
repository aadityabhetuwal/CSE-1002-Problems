#include <iostream>

#define ll long long
#define ull unsigned long long

#define pi 3.1415f

int main(){
    float r;

    printf("Enter radius of circle : ");
    scanf("%f", &r);

    float area = pi * r * r;

    printf("Area of circle is %f", area);
    return 0;
}


