#include <iostream>
#include <vector>
#include <cstring>

#define ll long long
#define ull unsigned long long

using namespace std;

int main(){
    char ch[1000];
    
    scanf("%s", &ch);

    int n = strlen(ch);

    for(int i = n - 1; i >= 0; i--){
        cout << *(ch + i);
    }
    
    return 0;
}


