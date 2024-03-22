#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    for(int i = 0; i<t; i++) {
        string s;
        cin>>s;
        int arr[26]={0};

        for(int j = 0; j<s.size(); j++) {
            arr[s[j]-'a']++;
        }

        int ans = 0;
        int cnt = 0;
        for(int j = 0; j<26; j++) {
            if(arr[j] == 1) cnt++;
            else if(arr[j] > 1) ans++;
        }

        cout<< cnt/2 + ans <<endl;
    }
    return 0;
}