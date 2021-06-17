#include <iostream>
#include <vector>
#include <cmath>
#include <unordered_map>
#include <utility>

#define ll long long
#define ull unsigned long long

using namespace std;

class Machine{
public:
    int code;
    int stock;
    double price;
    unordered_map<int, pair<int, double>> data; 

    void get_input(){
        cin >> code >> price >> stock;
        data[code] = {stock, price};
        
    }

    int machine_output(int ucode, int cost){
        // 1 for code not found
        // 2.01 for insufficient funds
        // "no stock" for low stock
        // returns 10 for no errors

        if(data.find(ucode) == data.end()){
            throw 1;
        }

        if(cost < data[ucode].second){
            throw 2.01;
        }
        
        if(data[ucode].first == 0){
            throw "no stock";
        }

        return 10;
    }
};

int main(){
    int n;
    cin >> n;

    Machine vend;

    for(int i = 0; i < n; i++)
        vend.get_input();

    int user_code;
    float user_cost;
    cin >> user_code >> user_cost;

    try{
        int out = vend.machine_output(user_code, user_cost);
        cout << user_code << '\n';
        
    } catch (const int i){
        cout << "Wrong item code\n";

    } catch (const double db){
        cout << "Insufficient amount\n";

    } catch(const char* ch){
        cout << "Less stock\n";
    }

    return 0;
}