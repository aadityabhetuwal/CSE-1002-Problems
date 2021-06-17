#include <stdio.h>
#include <math.h>
#include <string.h>

#define ll long long

char *ch[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

void weekday(){
    int n;
    printf("Enter week number : ");
    scanf("%d", &n);

    printf("The weekday is = %s", ch[n - 1]);

}

void days_in_month(){
    int n;

    printf("Enter the month number : ");
    scanf("%d", &n);
    int days;

    if(n == 2)
        days = 28;
    
    else if(n <= 7){
        days = (n % 2) ? 31 : 30;
    }else
        days = (n % 2) ? 30 : 31;
    
    printf("The number of days in month number %d is = %d", n, days);

}

int main() {

    // weekday();
    days_in_month();

    return 0;
}