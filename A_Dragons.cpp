#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> a, pair<int ,int> b) {
    return a.first<b.first;
}

int main(){
    vector<pair<int, int>> v;
    int s,n;
    cin>>s>>n;
    for(int i = 0; i<n; i++){
        int x;
        int y;
        cin>>x>>y;
        v.push_back({x, y});
    }

    sort(v.begin(), v.end(), comp);
    bool flag = true;
    for(int i = 0; i<n; i++) {
        if(s > v[i].first) {
            s += v[i].second;
        }
        else {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;

    return 0;
}