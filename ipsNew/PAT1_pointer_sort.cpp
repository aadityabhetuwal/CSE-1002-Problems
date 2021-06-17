#include <iostream>
#include <vector>
#include <cmath>

#define ll long long
#define ull unsigned long long

using namespace std;

void ins_sort(int *arr, int n){
    int j, tmp;

    for(int i = 1; i < n; i++){
        j = i - 1;
        tmp = arr[i];

        while(j >= 0 && arr[j] > tmp){
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = tmp;

    }
}   


int main(){
    int n = 5;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    ins_sort(arr, n);

    for(int i = 0; i < n; i++){
        cout << *(arr + i) << "\n";
    }

    return 0;
}