#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    for(int i = 0; i<t; i++) {
        bool arr[26]={0};
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ans = 0;
        for(int j = 0; j<n; j++) {
            if(arr[s[j]-'A'] == false) {
                ans++;
                arr[s[j]-'A'] = true;
            }
            ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}