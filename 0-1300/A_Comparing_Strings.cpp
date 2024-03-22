#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;

    if(s1.size() != s2.size()) {
        cout<<"NO"<<endl;
        return 0;
    }

    string c1,c2;
    for(int i = 0; i<s1.size(); i++) {
        if(s1[i] != s2[i]) {
            c1 += s1[i];
            c2 += s2[i];
        }
    }

    if(c1.size() > 2 || c1.size() == 1) {
        cout<<"NO"<<endl;
        return 0;
    }

    if(c1.size() == 0) {
        cout<<"YES"<<endl;
        return 0;
    }

    if(c1[0] == c2[1] && c1[1] == c2[0]) {
        cout<<"YES"<<endl;
        return 0;
    }

    cout<<"NO"<<endl;
    
}