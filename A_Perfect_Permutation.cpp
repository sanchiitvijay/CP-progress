#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    if(t&1) cout<<-1<<endl;
    else {
        vector<int>v(t, 0);
        for(int i = 0; i<t; i++) {
            v[i] = i+1;
        }
        int i = 0,j=1;
        while(i<t) {
            swap(v[i], v[j]);
            i+=2;
            j+=2;
        }
        for(int i = 0; i<t; i++){
            cout<<v[i]<<" ";
        }
    }
    return 0;
}