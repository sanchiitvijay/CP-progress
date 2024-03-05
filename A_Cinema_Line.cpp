#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, tmp;
    cin>>n;
    vector<int> v;
    for(int i = 0; i<n ;i++) {
        cin>>tmp;
        v.push_back(tmp);
    }
    int tf=0, ft=0;
    for(int i = 0; i<n; i++) {
        if(v[i] == 100) {
            if(ft > 0 && tf > 0) {
                ft--;
                tf--;
            }
            else if(tf > 2) tf -= 3;
            else {
                cout<<"NO"<<endl;
                return 0;
            }
        }
        else if(v[i] == 50) {
            if(tf > 0) tf--;
            else {
                cout<<"NO"<<endl;
                return 0;
            }
            ft++;
        }
        else tf++;
    }
    cout<<"YES"<<endl;
    return 0;
}