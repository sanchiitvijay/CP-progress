#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v;
    int a=0, b = 1;
    v.push_back(a);
    v.push_back(b);
    while(b < n) {
        int tmp = a + b;
        a = b;
        b = tmp;
        v.push_back(b);
    }

    for(int i = 0; i<v.size(); i++) {
        for(int j = 0; j<v.size(); j++) {
            for(int k = 0; k<v.size(); k++) {
                if(v[i] + v[j] + v[k] == n) {
                    cout<<v[i]<<" "<<v[j]<<" "<<v[k]<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<"I'm too stupid to solve this problem"<<endl;
    return 0;
}