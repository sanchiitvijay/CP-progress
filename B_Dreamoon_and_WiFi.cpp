#include<bits/stdc++.h>
using namespace std;

double fact(int n) {
    if(n == 1 || n == 0) return 1;
    return n*fact(n-1);
}

int main(){
    string s1,s2;
    cin>>s1>>s2;
    double minus = 0, plus = 0;
    for(auto i : s1)  {
        if(i == '+') plus++;
        else minus++;
    }
    double q = 0;
    for(auto i : s2) {
        if( i == '+') plus--;
        else if(i == '-') minus--;
        else q++;
    }
    if(minus < 0 || plus < 0) cout<<0<<endl;
    else if(minus == 0 && plus == 0) cout<<1<<endl;
    else printf("%.12lf",(fact(q)/(fact(plus)*fact(minus))/pow(2,q)));

    return 0;
}