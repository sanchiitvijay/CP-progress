#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 0; i<t; i++) {
        int n;
        string s;
        cin>>n>>s;
        string ans = "";

        for(int j = n-1; j>=0; j--) {
            if(s[j] == '0') {
                int num1 = (s[j-1]-'0');
                int num2  =(s[j-2]-'0');
                char temp = 'a' + ((num2*10+num1)-1);
                // cout<<s[j-1]<<"   "<<num1<<"   "<<num2<<"   "<<temp<<"   "<<endl;
                ans = temp + ans;
                j = j-2;
            }
            else {
                int num = (s[j]-'0')-1;
                char temp = 'a' + num;
                ans = temp + ans;
            }
        }

        cout<<ans<<endl;

    }
    return 0;
}