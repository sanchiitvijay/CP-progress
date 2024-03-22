#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long int tmp;
    long long int mini = INT_MAX;
    long long int maxi = INT_MIN;
    map<long long int, long long int> mp;
    for(int i = 0; i<n; i++) {
        cin>>tmp;
        mini = min(mini ,tmp);
        maxi = max(maxi, tmp);
        mp[tmp]++;
    }
    long long int ans = (mini==maxi) ? mp[mini]*(mp[maxi]-1)/2 : mp[mini]*mp[maxi];
    cout<<maxi-mini<<" "<<ans<<endl;;


    return 0;
}