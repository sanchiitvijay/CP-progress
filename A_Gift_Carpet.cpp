#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--) {
        int n,m;
        cin>>n>>m;
        string temp = "vika";
        int k=0;

        vector<string> s;
        for(int i = 0; i<n; i++) {
            string st;
            cin>>st;
            s.push_back(st);
        }

        for(int i = 0; i<m; i++) {
            for(int j = 0; j<n; j++) {
                if(s[j][i] == temp[k]) {
                    k++;
                    break;
                }
            }
        }

        if(k == 4) cout<<"YES"<<endl;
        else  cout<<"NO"<<endl;
    }
    return 0;
}