#include <stdio.h>
#include <math.h>
#include <string.h>


#define ll long long


struct Complex{
    float real;
    float complex;
};

struct Roots{
    struct Complex root1;
    struct Complex root2;
};

void get_roots(float a, float b, float c, struct Roots *root){
    struct Complex c1, c2;

    float fac = pow(b, 2) - 4 * a * c;
    float first = -(b/(2.0f * a));
    float second;


    if (fac >= 0){
        c1.complex = 0.0f;
        c2.complex = 0.0f;

        second = sqrt(fac)/(2.0f * a);

        c1.real = first + second;
        c2.real = first - second;

    }else{
        float tmp = fabs(fac);

        second = sqrt(tmp)/(2.0 * a);

        c1.real = first;
        c2.real = first;

        c1.complex = second;
        c2.complex = -second;

    }
    root->root1 = c1;
    root->root2 = c2;

    return;
}   

int main() {
    float a, b, c;

    printf("Enter coefficients of quadratic equation a b c = ");
    scanf("%f %f %f", &a, &b, &c);

    struct Roots root;

    get_roots(a, b, c, &root);

    printf("The given roots of equation are : \n");

    printf("(%f) + (%f) i\n", root.root1.real, root.root1.complex);
    printf("(%f) + (%f) i\n", root.root2.real, root.root2.complex);

    return 0;
}