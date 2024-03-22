#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<string> v;
    string s;
    cin>>s;
    v.push_back(s);
    cin>>s;
    v.push_back(s);
    cin>>s;
    v.push_back(s);
    cin>>s;
    v.push_back(s);

    for(int i = 0; i<3; i++) {
        for(int j = 0; j<3; j++) {
            if((v[i][j] == '#' && v[i][j+1] == '#' && v[i+1][j] == '#' && v[i+1][j+1] == '.') || 
            (v[i][j] == '#' && v[i][j+1] == '#' && v[i+1][j] == '.' && v[i+1][j+1] == '#') ||
            (v[i][j] == '#' && v[i][j+1] == '.' && v[i+1][j] == '#' && v[i+1][j+1] == '#') ||
            (v[i][j] == '.' && v[i][j+1] == '#' && v[i+1][j] == '#' && v[i+1][j+1] == '#') || 
            (v[i][j] == '#' && v[i][j+1] == '.' && v[i+1][j] == '.' && v[i+1][j+1] == '.') ||
            (v[i][j] == '.' && v[i][j+1] == '#' && v[i+1][j] == '.' && v[i+1][j+1] == '.') ||
            (v[i][j] == '.' && v[i][j+1] == '.' && v[i+1][j] == '#' && v[i+1][j+1] == '.') ||
            (v[i][j] == '.' && v[i][j+1] == '.' && v[i+1][j] == '.' && v[i+1][j+1] == '#') ||
            (v[i][j] == '#' && v[i][j+1] == '#' && v[i+1][j] == '#' && v[i+1][j+1] == '#') ||
            (v[i][j] == '.' && v[i][j+1] == '.' && v[i+1][j] == '.' && v[i+1][j+1] == '.')) {
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}