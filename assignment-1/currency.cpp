#include <iostream>
#include <iomanip>


using namespace std;

void solve(){
    int withdraw;
    float bal;
    const float transaction_cost = 0.5;

    cin >> withdraw >> bal;

    cout << fixed << setprecision(2);

    if(withdraw % 5 == 0 && withdraw <= bal){
        cout << bal - withdraw - transaction_cost << '\n';
    }else{  
        cout << bal << '\n';
    }

    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}