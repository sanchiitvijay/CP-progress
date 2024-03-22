#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,s1,s2,e1,e2;
    cin>>t>>s1>>s2>>e1>>e2;
    string s;
    cin>>s;
    int x = e1-s1;
    int y = e2-s2;
    int i = 0;
    for(; i<s.size(); i++) {
        if(s[i] == 'N' && y > 0) y--;
        if(s[i] == 'S' && y < 0) y++;
        if(s[i] == 'E' && x > 0) x--;
        if(s[i] == 'W' && x < 0) x++;
        if(x == 0 && y == 0) break;
    }
    if(x != 0 || y != 0) cout<<-1<<endl;
    else cout<<i+1<<endl;
    return 0;
}