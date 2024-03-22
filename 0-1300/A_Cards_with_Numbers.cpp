#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,tmp;
    cin>>n;
    unordered_map<int, queue<int>>mp;
    for(int i = 0; i<2*n; i++) {
        cin>>tmp;
        mp[tmp].push(i+1);
    }
    for(auto i: mp) {
        if(i.second.size()&1) {
            cout<<-1<<endl;
            return 0;
        }
    }

    for(auto i: mp) {
        int a = i.second.front();
        i.second.pop();
        int b = i.second.front();
        i.second.pop();
        cout<<a<<" "<<b<<endl;
    }

    return 0;
}