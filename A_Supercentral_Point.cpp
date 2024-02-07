#include<bits/stdc++.h>
using namespace std;
int main(){
    map<pair<int, int>, bool> mp;
    unordered_map<int, pair<int, int>> xmp;
    unordered_map<int, pair<int, int>> ymp;
    int t;
    cin>>t;
    for(int i = 0; i<t; i++) {
        int x,y;
        cin>>x>>y;
        mp[{x,y}] = true;

        if(ymp.find(y) != ymp.end()) {
            if(ymp[y].first > x) ymp[y].first = x;
            else if(ymp[y].second < x) ymp[y].second = x;
        }
        else ymp[y] = {x,x};

        if(xmp.find(x) != xmp.end()) {
            if(xmp[x].first > y) xmp[x].first = y;
            else if(xmp[x].second < y) xmp[x].second = y;
        }
        else xmp[x] = {y,y};

    }
    int cnt = 0;
    for(auto i : mp) {
        int x = i.first.first;
        int y = i.first.second;
            if(xmp[x].first < y && xmp[x].second > y && ymp[y].first < x && ymp[y].second > x) cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}