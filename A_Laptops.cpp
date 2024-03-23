#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<int,pair<int, int>> v;
    set<int> st;
    int a,b;
    for(int i = 0; i<n; i++) {
        cin>>a>>b;
        v[a] = {min(v[a].first, b),max(v[a].second, b)};
        st.insert(a);
    }
    vector<int> ve;
    for(auto i : st) {
        ve.push_back(i);
    }
    sort(ve.begin(), ve.end());
    // for(auto i: ve) {
    //     cout<<i<<" "<<v[i].first<<" "<<v[i].second<<endl;
    // }

    for(int i = 0; i<st.size()-1; i++) {
        for(int j = i+1; j<st.size(); j++) {
            if((v[ve[j]].first == 0 && v[ve[i]].second > v[ve[j]].second) || (v[ve[j]].first != 0 && v[ve[i]].second > v[ve[j]].first)) {
                cout<<"Happy Alex"<<endl;
                return 0;
            }
        }
    }
    cout<<"Poor Alex"<<endl;
    
    return 0;
}