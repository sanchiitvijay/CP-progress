#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v;
    int tmp;
    for(int i = 0; i<n; i++) {
        cin>>tmp;
        v.push_back(tmp);
    }
    sort(v.begin(), v.end());
    if(n == v[n-1]) {
        cout<<n+1<<endl;
        return 0;
    }
    tmp = 1;
    for(int i = 0; i<n; i++) {
        if(v[i] != tmp) {
            cout<<tmp<<endl;
            break;
        }
        tmp++;
    }
    return 0;
}