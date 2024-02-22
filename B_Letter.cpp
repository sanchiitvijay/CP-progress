#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    getline(cin, s1);
    getline(cin, s2);

    unordered_map<char, int> mp;
    for(int i = 0; i<s1.size(); i++) {
        mp[s1[i]]++;
    }

    for(int i = 0; i<s2.size(); i++) {
        mp[s2[i]]--;
        if(mp[s2[i]] < 0 && s2[i] != ' ') {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}