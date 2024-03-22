#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string smallS="";

    for(int i = 0; i<s.size(); i++) {
        if(s[i]=='Q') {
            smallS.push_back(s[i]);
        }
        else if(s[i]=='A') {
            smallS.push_back(s[i]);
        }
    }
    int n = smallS.size();
    int ans=0;

    for(int i = 0; i<n; i++) {
        if(smallS[i]=='Q') {
            for(int j = i+1; j<n; j++) {
                if(smallS[j]=='A'){
                    for(int k = j+1; k<n; k++){
                        if(smallS[k]=='Q') ans++;
                    }
                }
            }
        }
    }

    cout<<ans<<endl;

    return 0;
}