#include <iostream>
#include <vector>
#include <cmath>

#define ll long long
#define ull unsigned long long

using namespace std;


void solve(){
    int t; cin >> t;

    int n, chk = 4;
    int count;

    while(t--){
        cin >> n;
        count = 0;

        while(n){
            if(n % 10 == chk)
                count++;
            n /= 10;
        }

        cout << count << '\n';
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;   
}


