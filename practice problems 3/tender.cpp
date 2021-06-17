#include <iostream>
#include <vector>
#include <cmath>
#include <tuple>

#define ll long long
#define ull unsigned long long

using namespace std;

class Tendors{
public:

    void get_input_and_min_details(){
        
        int n;
        cin >> n;

        for(int i = 0; i < n; i++){
            cin >> regd >> vendor >> cost;
            data.push_back(make_tuple(regd, vendor, cost));

            if(cost < min_cost){
                min_index = i;
                min_cost = cost;
            }
        }

        // tuple<int, string, int> min_data = data[min_index];
        // not required just for testing

        cout << get<0>(data[min_index]) << '\n' << get<1>(data[min_index]) << '\n';

    }

private:
    int regd;
    string vendor;
    ll cost;
    int min_index;
    int min_cost = INT32_MAX; // to avoid the guessing game
    
    vector<tuple<int, string, int>> data;

};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Tendors tend;

    tend.get_input_and_min_details();

    return 0;
}


