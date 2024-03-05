#include<bits/stdc++.h>
using namespace std;
bool static comp(pair<int, pair<int, int>> a, pair<int, pair<int, int>> b) {
    if(a.first == b.first && a.second.first == b.second.first) {
        return a.second.second < b.second.second;
    }
    else if(a.first == b.first) return a.second.first < b.second.first;
    else return a.first > b.first;
}
int main(){
    int k,n,p,t;
    cin>>n>>k;
    vector<pair<int, pair<int, int>>> v;
    for(int i = 0; i<n ;i++) {
        cin>>p>>t;
        v.push_back({p,{t,i+1}});
    }
    sort(v.begin(), v.end(), comp);

    int index = k-1;
    while(index < n-1) {
        if(v[index].first == v[index+1].first && v[index].second.first == v[index+1].second.first) index++;
        else break;
    }

    cout<<v[index].second.second<<endl;

    return 0;
}