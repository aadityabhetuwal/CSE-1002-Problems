
#include <stdio.h>
#include <math.h>

#define ll long long
#define ull unsigned long long

using namespace std;

void get_scores(int *A, int *B, int n, int *scores){

    for(int i = 0; i < n; i++){

        if(A[i] > B[i])
            scores[0]++;
        else if (A[i] < B[i])
            scores[1]++;
    }
}

int main(){

    int n = 3;
    int scores[2] = {0};

    int A[3], B[3];

    for(int i = 0; i < n; i++){
        scanf("%d", &A[i]);
    }

    for(int i = 0; i < n; i++){
        scanf("%d", &B[i]);
    }

    get_scores(A, B, n, scores);

    printf("%d %d\n", scores[0], scores[1]);

    return 0;
}


