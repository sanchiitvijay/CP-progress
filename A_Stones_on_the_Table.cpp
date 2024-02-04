#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s;
    cin>>n>>s;
    string tmp = "";
    tmp += s[0];
    int index = 0;

    for(int i = 1; i<n; i++) {
        if(tmp[index] != s[i]) {
            index++;
            tmp += s[i];
        }
    }
    cout<<s.size() - tmp.size()<<endl;
    return 0;
}