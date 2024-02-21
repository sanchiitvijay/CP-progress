#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    vector<int> v(26,0);
    for(int i = 0; i<s.size(); i++) {
        v[s[i]-'a']++;
    }
    int one = -1;

    for(int i = 0; i<26; i++) {
        if(v[i]&1) one++;
    }

    if(one&1 && one>=0) cout<<"Second"<<endl;
    else cout<<"First"<<endl;

    return 0;
}