#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int arr[26]={0};

        for(int i = 0; i<n; i++) {
            string s;
            cin>>s;
            for(int j = 0; j<s.size(); j++) {
                arr[s[j] - 'a']++;
            }
        } 
        bool flag = true;
        for(int i = 0; i<26; i++) {
            if(arr[i]!=0 && arr[i]%n != 0) {
                flag = false;
                break;
            }
        }

        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}