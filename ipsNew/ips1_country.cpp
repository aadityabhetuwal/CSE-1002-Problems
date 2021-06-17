#include <iostream>

#define ll long long
#define ull unsigned long long


using namespace std;

int main(){
    int n;
    cin >> n;
    char ch[n][100];

    for(int i = 0; i < n; i++)
        cin >> ch[i];

    cout << ch[3] << '\n';

    return 0;
}


