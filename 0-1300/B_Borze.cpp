#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n = s.size();
    string ans = "";
    bool flag = true;
    for(int i = 0; i<n-1; i++) {
        if(s[i]=='-' && s[i+1] == '-') {
            ans.push_back('2');
            i++;
            if(i == n-1) flag = false;
        }
        else if(s[i]=='-' && s[i+1] == '.') {
            ans.push_back('1');
            i++;
            if(i == n-1) flag = false;
        }
        else {
            ans.push_back('0');
        }
    }

    if(flag) ans.push_back('0');

    cout<<ans<<endl;
    return 0;
}