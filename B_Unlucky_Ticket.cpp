#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string num;
    cin>>n;
    cin>>num;

    vector<int> v1;
    vector<int> v2;

    for(int i = 0; i<n; i++) {
        v1.push_back(num[i]-'0');
    }
    for(int i = n; i<2*n; i++) {
        v2.push_back(num[i]-'0');
    }

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    if(v1[0]>v2[0]) {
        for(int i = 1; i<n; i++) {
            if(v1[i] <= v2[i]) {
                cout<<"NO"<<endl;
                return 0;
            }
        }
        cout<<"YES"<<endl;
        return 0;
    }

    if(v1[0]<v2[0]) {
        for(int i = 1; i<n; i++) {
            if(v1[i] >= v2[i]) {
                cout<<"NO"<<endl;
                return 0;
            }
        }
        cout<<"YES"<<endl;
        return 0;
    }
    cout<<"NO"<<endl;
    return 0;
}