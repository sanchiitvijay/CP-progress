#include<bits/stdc++.h>
using namespace std;

int x,y;

void solve(vector<vector<char>>& v, int i, int j, bool flag, int& count) {
    if(count == 0) {
        return ;
    }

    if(j == y) {
        j = 0;
        i++;
    }

    if(!flag) {
        v[i][j] = 'B';
        if(i-1>=0 && v[i-1][j] == '.') {
            
            solve(v, i-1, j, !flag, --count);
        }
        if(j-1>=0 && v[i][j-1] == '.') {
        
            solve(v, i, j-1, !flag, --count);
        }
        if(i+1<x && v[i+1][j] == '.') {
    
            solve(v, i+1, j, !flag, --count);
        }
        if(j+1<y && v[i][j+1] == '.') {
            
            solve(v, i, j+1, !flag, --count);
        }
    }
    else {
        v[i][j] = 'W';
        if(i-1>=0 && v[i-1][j] == '.') {
      
            solve(v, i-1, j, !flag, --count);
        }
        if(j-1>=0 && v[i][j-1] == '.') {
         
            solve(v, i, j-1, !flag, --count);
        }
        if(i+1<x && v[i+1][j] == '.') {
        
            solve(v, i+1, j, !flag, --count);
        }
        if(j+1<y && v[i][j+1] == '.') {

            solve(v, i, j+1, !flag, --count);
        }
    }
    return ;
}

int main(){
    int n,m;
    cin>>n>>m;
    x = n;
    y = m;
    vector<vector<char>>tv;
    vector<char> v;
    char ch;
    int count = 0;
    for(int i = 0; i<n; i++) {
        for(int j = 0; j<m; j++) {
            cin>>ch;
            if(ch != '-') count++;
            v.push_back(ch);
        }
        tv.push_back(v);
        v.clear();
    }

    
    for(int i = 0; i<n; i++) {
        for(int j = 0; j<m; j++) {
            if(tv[i][j] == '.')
                solve(tv, i, j, false, count);
        }
    }

    for(int i = 0; i<n; i++) {
        for(int j = 0; j<m; j++) {
            cout<<tv[i][j];
        }
        cout<<endl;
    }

    return 0;
}