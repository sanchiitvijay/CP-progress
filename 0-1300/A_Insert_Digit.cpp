#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 0; i<t; i++) {
        int d;
        char n;
        cin>>d>>n;
        string s;
        cin>>s;

        
        for(int j = 0; j<d; j++) {
            if(s[j] < n) {
                s.insert(s.begin()+ j, n);
                break;
            }
        }
        if(s.size() == d) {
            s += n;
        }

        cout<<s<<endl;

    }
    return 0;
}