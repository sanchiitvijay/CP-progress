#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int one0=0, one1=0, zero0=0, zero1=0;
    for(int i = 0; i<n; i++) {
        int x,y;
        cin>>x>>y;
        x==0 ? zero0++ : zero1++;
        y==0 ? one0++ : one1++;
    }
    cout<<min(one0,one1) + min(zero1, zero0)<<endl;
    return 0;
}