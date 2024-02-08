#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int arr[26] = {0};
    for(int i = 0; i<s.size(); i++) {
        arr[s[i]-'a']++;
    }
    for(int i = 0; i<26; i++) {
        if(arr[i]%n != 0) {
            cout<<-1<<endl;
            return 0;
        }
    }
    string tmp = "";
    string ans = "";
    for(int i = 0; i<26; i++) {
        for(int j = 0; j<arr[i]/n; j++) {
            tmp += (i+'a');
        }
    }
    for(int i = 0; i<n; i++) {
        ans += tmp;
    }
    cout<<ans<<endl;
    return 0;
}