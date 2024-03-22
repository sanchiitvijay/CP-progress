#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[26]={0};
    int arr1[26]={0};

    string s1,s2,s;
    int n1,n2,n;

    cin>>s1>>s2>>s;

    n1 = s1.size();
    n2 = s2.size();
    n = s.size();

    for(int i = 0; i<n1; i++) {
        arr[s1[i]-'A']++;
    }

    for(int i = 0; i<n2; i++) {
        arr[s2[i]-'A']++;
    }

    for(int i = 0; i<n; i++) {
        arr1[s[i]-'A']++;
    }


    bool flag = true;
    for(int i = 0; i<26; i++) {
        if(arr[i] != arr1[i]) {
            flag = false;
            break;
        }
    }

    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
    return 0;
}