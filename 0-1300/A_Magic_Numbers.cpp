#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string tmp = "";
    for(int i = s.size()-1; i>=0; i--) {
        if(s[i] != ' ') {

            if(s[i] != '1' && s[i] != '4') {
                cout<<"NO"<<endl;
                return 0;
            }
            if(s[i] == '4') {
                tmp = s[i] + tmp;
            }
            if(s[i] == '1') {
                tmp = s[i] + tmp;
                if(tmp.size()>3){
                    cout<<"NO"<<endl;
                    return 0;
                }
                else tmp.clear();
            }

            }
    }
    if(tmp.size() != 0){
        cout<<"NO"<<endl;
        return 0;
    }
    cout<<"YES"<<endl;
    return 0;
}