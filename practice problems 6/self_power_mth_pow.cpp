#include<iostream>
using namespace std;
#include<math.h>

long int sum_pow(int n, int m=0);

long int sum_pow(int n, int m){

    long int res = 0;
    long int tmp;


    if(m == 0){
        for(int i = 1; i <= n; i++){
            tmp = pow(i, i);
            res += tmp;
        }
    }else{
        for(int i = 1; i <= n; i++){
            tmp = pow(i, m);
            res += tmp;
        }
    } 

    return res;
}


int main()
{	
	long int sum,n,m;
	cin>>n>>m;

	if(m<0)
	    cout<<"Invalid input";
	else
	{
        if(m!=0)
            sum=sum_pow(n, m);
        else
            sum=sum_pow(n);
        cout<<sum;
	}
}