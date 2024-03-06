#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 1000001;
    vector<int> v(n, -1);
    v[1] = 0;
    for(int i = 2; i<n; i++) {
        if(v[i] == -1) {
            v[i] = 1;
            for(int j = i+i; j<n; j += i) v[j] = 0;
        }
    }

    int t;
    long long int tmp;
    cin>>t;
    while(t--) {
        cin>>tmp;
        long long int sq = sqrt(tmp);
        if(sq * sq == tmp && v[sq] == 1) {
            cout<<"YES"<<endl;

        }
        else cout<<"NO"<<endl;
    }
    return 0;
}