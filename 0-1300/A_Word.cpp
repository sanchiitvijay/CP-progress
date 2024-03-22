#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int lowercase = 0, uppercase=0;
    for(int i = 0; i<s.size(); i++) {
        if(s[i]-'A' >= 0 && s[i]-'A' <= 25) uppercase++;
        else lowercase++;
    }
    if(uppercase > lowercase) {
        for(int i = 0; i<s.size(); i++) {
             s[i] = toupper(s[i]);
        }
    }
    else {
        for(int i = 0; i<s.size(); i++) {
             s[i] = tolower(s[i]);
        }
    }
    cout<<s<<endl;
    return 0;
}