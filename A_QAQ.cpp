#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string smallS="";
    int q=0,a=0;
    for(int i = 0; i<s.size(); i++) {
        if(s[i]=='Q') {
            smallS.push_back(s[i]);
            q++;
        }
        else if(s[i]=='A') {
            smallS.push_back(s[i]);
            a++;
        }
    }

    
    return 0;
}