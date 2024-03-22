#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 0; i<t; i++) {
        int n;
        cin>>n;
        int n1=0;
        int n2=0;
        int n3=0;
        map<string,pair<int,int>> mp;

        for(int i = 0; i<3; i++) {
            for(int j = 0; j<n; j++) {
                string s;
                cin>>s;
                if(mp.find(s) == mp.end()) {
                    mp[s] = make_pair(1,i+1);
                    if(i == 0) n1+=3;
                    else if(i == 1) n2+=3;
                    else if(i == 2) n3+=3;
                }
                else {
                    if(mp[s].first == 1) {
                        if(mp[s].second == 1) {
                            if(mp[s].second != i+1)
                                n1 -= 2;
                            if(i == 1)
                                n2++;
                            else n3++;
                        }
                        else {
                            if(mp[s].second != i+1)
                                n2-=2;
                            n3++;
                        }
                        mp[s].first++;
                        mp[s].second = i+1;
                    }
                    else if(mp[s].first == 2) {
                        if(mp[s].second != i+1) {
                            n1--;
                            n2--;
                            mp[s].second = i+1;
                        }
                    }
                }
            }
        }
        cout<<n1<<" "<<n2<<" "<<n3<<endl;
    }
    
    return 0;
}