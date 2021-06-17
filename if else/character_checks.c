#include <stdio.h>
#include <math.h>
#include <string.h>

#define ll long long

void chk_char(char ch){
    
    if((ch >= 'a' && ch <= 'a' + 25) || (ch >= 'A' && ch <= 'A' + 25))
        printf("%c is an alphabet\n", ch);
    else
        printf("%c is not an alphabet\n", ch);

}

void chk_vowel(char ch){
    if(ch >= 'A' && ch <= 'A' + 25)
        ch = ch + 32;
    
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        printf("%c is a vowel\n", ch);
    else
        printf("%c is a consonant\n", ch);

}

void chk_dig_alphabet(char ch){

    if((ch >= 'A' && ch <= 'A' + 25) || (ch >= 'a' && ch <= 'a' + 25))
        printf("%c is an alphabet\n", ch);
    else if ((ch >= '0' && ch <= '0' + 9))
        printf("%c is a digit\n", ch);
    else
        printf("%c is a special character\n", ch);
    
}

void upper_or_lower(char ch){

    if(ch >= 'a' && ch <= 'a' + 25)
        printf("%c is lowecase\n", ch);
    else if (ch >= 'A' && ch <= 'A' + 25)
        printf("%c is uppercase\n", ch);

}

int main() {
    char ch;
    scanf("%c", &ch);

    // chk_char(ch);
    // chk_vowel(ch);
    // chk_dig_alphabet(ch);
    upper_or_lower(ch);

    return 0;
}