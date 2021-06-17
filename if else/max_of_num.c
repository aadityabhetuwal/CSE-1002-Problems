#include <stdio.h>
#include <math.h>
#include <string.h>

#define ll long long

int _max(int a, int b){
    int tmp = a > b ? a : b;
    return tmp;
}

int _max3(int a, int b, int c){
    int tmp = (a < b) ? ((c < b) ? b : c) : ((a > c) ? a : c);
    return tmp;
}

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    printf("The max of %d and %d = %d\n", a, b, _max(a, b));
    printf("The max of %d, %d and %d = %d", a, b, c, _max3(a, b, c));

    return 0;
}