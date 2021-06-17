#include<iostream>
#include<string.h>

using namespace std;

class stringops
{
char str[50];
public:
	friend istream& operator>>(istream&,stringops&);
	friend ostream& operator<<(ostream&,stringops&);
	//Return a new string with letters rotated
	stringops operator>>(int);	
	//Return a new string with odd letters first
	stringops operator++();
	//Return a new string with even letters first
	stringops operator++(int);
	//Return a new string after Oddevenswap
	stringops operator + (stringops&);
	//Return a new string after Evenoddswap
	stringops operator - (stringops&);
	//Return a new string after spin
	stringops operator * (stringops&);
};

istream& operator >>(istream& is, stringops& st){
    is >> st.str;
    return is;
}

ostream& operator <<(ostream& os, stringops& st){
    os << st.str;
    return os;
}

stringops stringops::operator >>(int n){
    int sz = strlen(str);

    stringops res;
    res.str[sz] = '\0';
    int count = 0;
    
    for(int i = n - 1; i >= 0; i--){
        res.str[count++] = str[i];
    }

    for(int i = n; i < sz; i++){
        res.str[count++] = str[i];
    }

    return res;
}

stringops stringops::operator ++(){ //prefix
    int sz = strlen(str);

    stringops res;
    res.str[sz] = '\000';
    int count = 0;

    for(int i = 0; i < sz; i += 2){
        res.str[count++] = str[i];
    }

    for(int i = 1; i < sz; i += 2){
        res.str[count++] = str[i];
    }

    return res;
}

stringops stringops::operator ++(int){ //postfix
    int sz = strlen(str);
    
    stringops res;
    res.str[sz] = '\000';
    int count = 0;

    for(int i = 1; i < sz; i += 2){
        res.str[count++] = str[i];
    }

    for(int i = 0; i < sz; i += 2){
        res.str[count++] = str[i];
    }

    return res;
}

stringops stringops::operator *(stringops& st){
    int sz1 = strlen(str);
    int sz2 = strlen(st.str);

    stringops res;
    res.str[sz1 + sz2] = '\0';
    int count = 0;
    int iter = 0;

    if(sz1 == sz2){
        for(int i = 0; i < sz1; i++){
            res.str[count++] = str[i];
            res.str[count++] = st.str[i];
            iter++;
        }
        
    } else if (sz1 < sz2){
        for(int i = 0; i < sz1; i++){
            res.str[count++] = str[i];
            res.str[count++] = st.str[i];
            iter++;
        }

        for(int i = iter; i < sz2; i++){
            res.str[count++] = st.str[i];
        }

    }else if (sz1 > sz2){
        for(int i = 0; i < sz2; i++){
            res.str[count++] = str[i];
            res.str[count++] = st.str[i];
            iter++;
        }

        for(int i = iter; i < sz1; i++){
            res.str[count++] = str[i];
        }
    }
    
    return res;
}

stringops stringops::operator +(stringops& st){
    int sz1 = strlen(str);
    int sz2 = strlen(st.str);
    
    stringops res;
    res.str[sz1] = '\000';
    int count = 0;

    int j = 1;

    for(int i = 0; i < sz1; i++){
        if(i % 2 == 0){
            if(j < sz2){
                res.str[count++] = st.str[j];
            }else{
                res.str[count++] = str[i];
            }
            j += 2;
        }else{
            res.str[count++] = str[i];
        }
    }

    return res;
}

stringops stringops::operator -(stringops& st){
    int sz1 = strlen(str);
    int sz2 = strlen(st.str);
    
    stringops res;
    res.str[sz1] = '\000';
    int count = 0;

    int j = 0;

    for(int i = 0; i < sz1; i++){
        if(i % 2 == 1){
            if(j < sz2){
                res.str[count++] = st.str[j];
            }else{
                res.str[count++] = str[i];
            }
            j += 2;
        }else{
            res.str[count++] = str[i];
        }
    }

    return res;
}

int main()
{
	stringops s1,s2,s3;
	int n;
	cin>>s1>>s2;
	cin>>n;
	//rotate
	s3= s1>>n;
	cout<<s3<<endl;	
	//oddfirst
	s3 = ++s2;
	cout<<s3<<endl;
	//evenfirst
	s3 = s1++;
	cout<<s3<<endl;
	//spin
	s3 = s1*s2;
	cout<<s3<<endl;
	//Oddeven swap	
	s3 = s1+s2;
	cout<<s3<<endl;
	//Evenodd swap
	s3 = s1-s2;
	cout<<s3<<endl;
}