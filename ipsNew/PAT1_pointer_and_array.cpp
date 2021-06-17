#include <iostream>
#include <vector>
#include <cmath>

#define ll long long
#define ull unsigned long long

using namespace std;

int main(){
    int n = 5;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "The elements you entered are : \n";

    for(int i = 0; i < n; i++){
        cout << "element - " << i << " : " << *(arr + i) << '\n';
    }
    return 0;
}
