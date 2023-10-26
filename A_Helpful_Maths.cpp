#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int one=0,two=0,three=0;
    int n = s.size();
    for(int i = 0; i<n; i+=2){
        if(s[i]=='1') one++;
        else if(s[i]=='2') two++;
        else if(s[i]=='3') three++;
    }

    for(int i = 0; i<n; i+=2) {
        if(one != 0) {
            s[i] = '1';
            one--;
        }
        else if(two != 0) {
            s[i] = '2';
            two--;
        }
        else if(three != 0) {
            s[i] = '3';
            three--;
        }
    }

    cout<<s<<endl;
    return 0;
}