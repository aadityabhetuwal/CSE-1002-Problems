#include <stdio.h>
#include <math.h>
#include <string.h>

#define ll long long


int main() {
    char ch = 'a' - 1;

    for(int i = 0; i < 26; i++){
        printf("%c ", ++ch);
    }

    return 0;
}