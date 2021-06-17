#include <iostream>
#include <vector>
#include <cmath>

#define ll long long
#define ull unsigned long long

#define FO(i, s, e, it) for(i = s; i < e; i += it)
#define RFO(i, s, e, it) for(i = e - 1; i >= s; i -= it)

class Complex {
public:
    double a, b;
    //default constructor
    Complex(){
        this->a = 0.0f;
        this->b = 0.0f;
    }
    
    //constructor if it is given
    Complex (double a, double b){
        this->a = a;
        this->b = b;
    }   

    Complex operator* (const Complex &c2){
        Complex _res;

        double real = this->a * c2.a - this->b * c2.b;
        double imag = this->a * c2.b + this->b * c2.a;

        _res.a = real;
        _res.b = imag;
        return _res;
    }

    Complex operator+ (const Complex &c1){
        Complex res;
        
        res.a = this->a + c1.a;
        res.b = this->b + c1.b;
        return res;
    }

    Complex operator- (const Complex &c1){
        Complex res;
        
        res.a = this->a - c1.a;
        res.b = this->b - c1.b;
        return res;
    }
};


int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    double a, b, c, d;
    std::cin >> a >> b >> c >> d;

    Complex c1(a, b), c2(c, d);

    Complex c3;
    c1 = c1 + c2;

    std::cout << c1.a << ' ' << c1.b << '\n';
    
    Complex c4;
    c4 = c1 - c2;

    std::cout << c4.a << ' ' << c4.b << '\n';

    Complex c5;
    c5 = c1 * c2;
    std::cout << c5.a << ' ' << c5.b << '\n';



    return 0;
}


