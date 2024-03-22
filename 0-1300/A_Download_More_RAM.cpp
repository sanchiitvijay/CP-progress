#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--) {
        int n,k;
        cin>>n>>k;

        int a[n],b[n];

        for(int i = 0; i<n; i++) {
            cin>>a[i];
        }
        for(int i = 0; i<n; i++) {
            cin>>b[i];
        }

        map<int,bool> v;

        while(true) {
            bool flag = true;
            for(int i = 0; i<n; i++) {
                if(v.find(i) == v.end() && k>=a[i]) {
                    k+=b[i];
                    v[i] = true;
                    flag = false;
                }
            }
            if(flag) break;
        }

        cout<<k<<endl;
    }
    return 0;
}