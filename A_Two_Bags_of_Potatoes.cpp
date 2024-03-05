#include<bits/stdc++.h>
using namespace std;
int main(){
    int y,k,n;
    cin>>y>>k>>n;
    bool flag = true;
    vector<int> v;
    int i = n - (n%k) - y;
    for(; i>0; i-=k) {
        v.push_back(i);
    }
    
    if(v.size() == 0) cout<<-1<<endl;
    else {
        for(int i = v.size()-1; i>=0; i--) {
            cout<<v[i]<<" ";
        }
    }
    return 0;
}