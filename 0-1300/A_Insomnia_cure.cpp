#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    vector<bool>v(d, 0);
    for(int i = 1; i<=d; i++) {
        if(i*k-1 < d)
            v[i*k-1] = 1;
        if(i*l-1 < d)
            v[i*l-1] = 1;
        if(i*m-1 < d)
            v[i*m-1] = 1;
        if(i*n-1 < d)
            v[i*n-1] = 1;
    }
    int cnt = 0;
    for(int i = 0; i<d; i++) {
        if(v[i] == 1) {
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}