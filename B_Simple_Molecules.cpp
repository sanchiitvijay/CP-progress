#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    for(int i = 0; i<=a; i++) {
        for(int j = 0; j<=b; j++) {
            if(i + j == c && a - i == b - j) {
                cout<< a- i <<" "<<j<<" "<<i<<endl;
                return 0;
            }
        }
    }
    cout<<"Impossible"<<endl;
    return 0;
}