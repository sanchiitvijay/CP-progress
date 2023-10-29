#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 0; i<t; i++) {
        int d,n;
        cin>>d>>n;
        string s;
        cin>>s;

        bool flag = true;
        if((s[0]-'0')<=n) {
            s = to_string(n) + s;
            flag = false;
        }
        for(int j = 0; j<d-1 && flag; j++) {
            if((s[j]-'0')>n && (s[j+1]-'0')<=n && (s[j+2]-'0')<=n) {
                s.insert(j+1,to_string(n));
                flag = false;
                break;
            }
        }
        if(flag) {
            if(d>=2 && (s[d-2]-'0')>n && (s[d-1]-'0')<=n ) {
                s.insert(d-1,to_string(n));
            }
            else{
                s = s + to_string(n);}
            }

        cout<<s<<endl;

    }
    return 0;
}