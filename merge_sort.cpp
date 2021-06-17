#include <iostream>
#include <vector>
#include <cmath>

#define ll long long
#define ull unsigned long long

#define FO(i, s, e, it) for(i = s; i < e; i += it)
#define RFO(i, s, e, it) for(i = e - 1; i >= s; i -= it)

using namespace std;

// vector<int> res;

void print_arr(vector<int> arr, int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << ' ';
    }
    cout << '\n';
}

vector<int> _merge(vector<int> a,vector<int> b){
    int n1 = a.size();
    int n2 = b.size();

    vector<int> res;
    int i = 0, j = 0;

    while(i < n1 || j < n2){

        if(i >= n1){
            res.push_back(b[j++]);

        } else if (j >= n2){
            res.push_back(a[i++]);

        }else if (a[i] <= b[j]){
            res.push_back(a[i++]);

        }else if(a[i] > b[j]){
            res.push_back(b[j++]);
        }

    }

    return res;
}

vector<int> merge_sort(vector<int> arr, int n){

    //base case
    if(n == 1){
        return arr;
    }

    else if(n == 2){
        if(arr[0] > arr[1])
            swap(arr[0], arr[1]);
        return arr;
    }

    int mid = n/2;

    vector<int> left(arr.begin(), arr.begin() + mid);
    vector<int> right(arr.begin() + mid, arr.end());

    left = merge_sort(left, left.size());
    right = merge_sort(right, right.size());

    return _merge(left, right);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    vector<int> res = merge_sort(arr, n);

    print_arr(res, n);

    return 0;
}


