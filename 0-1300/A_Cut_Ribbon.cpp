#include<bits/stdc++.h>
using namespace std;

int ans = -1;
void helper(vector<int>& v, int n, int cnt, int sum) {
    if(sum == n) {
        ans = max(ans, cnt);
        return ;
    }
    if(sum>n) return ;

    for(int i = 0; i<v.size(); i++) {
        helper(v, n, cnt+1, sum+v[i]);
    }
    return ;
}

int main(){
    int n, tmp, cnt = 0;
    vector<int> v;
    set<int> s;
    cin>>n;
    cin>>tmp;
    s.insert(tmp);
    cin>>tmp;
    s.insert(tmp);
    cin>>tmp;
    s.insert(tmp);

    for(auto i : s) {
        v.push_back(i);
    }

    if(v[0] == 1) {
        cout<<n<<endl;
        return 0;
    }

    sort(v.begin(), v.end());
    helper(v, n, 0, 0);

    cout<<ans<<endl;

    return 0;
}