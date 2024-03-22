#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    vector<bool> v(26, 0);
    for(int i = 0; i<s.size(); i++) {
        v[s[i]-'a'] = 1;
    }
    int cnt = 0; 
    for(int i = 0; i<26; i++) {
        if(v[i]) cnt++;
    }
    if(cnt&1) cout<<"IGNORE HIM!"<<endl;
    else cout<<"CHAT WITH HER!"<<endl;
    return 0;
}