#include <iostream>
#include <vector>
#include <cmath>

#define ll long long
#define ull unsigned long long

using namespace std;

class Matrix{

public:
    int r;
    int c;
    int **arr;

    Matrix(){
    };

    Matrix(int, int);
    
    friend ostream& operator <<(ostream&, Matrix);

    void get_input();
    Matrix operator +(Matrix&);

};

ostream& operator <<(ostream& os, Matrix mat){

    for(int i = 0; i < mat.r; i++){
        for(int j = 0; j < mat.c; j++){
            os << mat.arr[i][j] << ' ';
        }
        os << '\n';
    }
    return os;
}

Matrix::Matrix(int n, int m){
    r = n;
    c = m;

    arr = (int **) malloc(r * sizeof(int *));

    for(int i = 0; i < r ; i++){
        arr[i] = (int *) malloc(c * sizeof(int));
    } 

}

Matrix Matrix::operator +(Matrix& mat){
    Matrix res(r, c);

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            res.arr[i][j] = arr[i][j] + mat.arr[i][j];
        }
    }

    return res;
}

void Matrix::get_input() {

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> arr[i][j];
        }
    }
}

int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    int T;
    cin >> T;
    int n, m;

    while(T--){
        cin >> n >> m;

        Matrix A(n, m);
        Matrix B(n, m);

        A.get_input();
        B.get_input();

        Matrix C;
        C = A + B;

        cout << C;  

    }

    return 0;
}
