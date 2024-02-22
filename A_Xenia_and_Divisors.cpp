#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    unordered_map<int, int> mp;
    for(int i = 0; i<n; i++) {
        int tmp;
        cin>>tmp;
        mp[tmp]++;
    }
    vector<vector<int>> ans;
    vector<int> v;
    while(ans.size() != n/3)
    if(mp[1] != 0 && mp[2] != 0 && mp[4] != 0) {
        mp[1]--;mp[2]--;mp[4]--;
        v = {1,2,4};
        ans.push_back(v);
        v.clear();
    }
    else if(mp[1] != 0 && mp[3] != 0 && mp[6] != 0) {
        mp[1]--;mp[3]--;mp[6]--;
        v = {1,3,6};
        ans.push_back(v);
        v.clear();
    }
    else if(mp[1] != 0 && mp[2] != 0 && mp[6] != 0) {
        mp[1]--;mp[2]--;mp[6]--;
        v = {1,2,6};
        ans.push_back(v);
        v.clear();
    }
    else break;

    if(ans.size() != n/3) {
        cout<<-1<<endl;
        return 0;
    }
    
    for(int i = 0; i<ans.size(); i++) {
        cout<<ans[i][0]<<" "<<ans[i][1]<<" "<<ans[i][2]<<endl;
    }

    return 0;
}