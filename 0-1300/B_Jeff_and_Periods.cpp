#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int i,j,k;
    long long int n,x,y;

    map<long long int,vector<long long int>> mp;

    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        mp[x].push_back(i);
    }

    vector<pair<int,int>> v;
    map<long long int,vector<long long int>>::iterator p=mp.begin();
    while(p!=mp.end())
    {
        k=p->first;

        if(mp[k].size()==1)
            v.push_back({k,0});

        else
        {
            set<long long int> s;
            for(i=1;i<mp[k].size();i++)
                s.insert(abs(mp[k][i]-mp[k][i-1]));

            set<long long int>::iterator q=s.begin();
            if(s.size()==1)
            v.push_back({k,*q});

        }

        p++;
    }

    cout<<v.size()<<endl;
    for(i=0;i<v.size();i++)
        cout<<v[i].first<<" "<<v[i].second<<endl;
    return 0;
}