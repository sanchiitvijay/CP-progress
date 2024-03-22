#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int i = 0; i<test; i++) {
        string s;
        cin>>s;
        int n = s.size();
        if(n>10) s = s[0] + to_string(n-2) + s[n-1];
        cout<<s<<endl;
    }
    return 0;
}