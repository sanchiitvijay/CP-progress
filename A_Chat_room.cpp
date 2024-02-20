#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int ind = 0;
    string h = "hello";
    for(int i = 0; i<s.size(); i++) {
        if(s[i] == h[ind]) ind++;
    }
    if(ind == 5) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;  
    return 0;
}