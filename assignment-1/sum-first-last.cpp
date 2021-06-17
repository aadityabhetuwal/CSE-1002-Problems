#include <iostream>


using namespace std;

void solve(){
    int T, n;
    cin >> T;

    int last, first;
    while(T--){
        cin >> n;

        first = 0;
        last =  n % 10;

        while(n > 9){
            n /= 10;
        }
        first = n;

        cout << first + last << '\n';
    }

    return;
}


int main(){
    solve();

    return 0;
}