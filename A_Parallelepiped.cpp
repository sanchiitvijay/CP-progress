#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y,z;
    cin>>x>>y>>z;
    int xx, yy, zz; 

    if(x == y && y == z) {
        xx = yy = zz = sqrt(x);
        cout<<4*(xx+yy+zz)<<endl;
        return 0;
    }


    unordered_map<int, bool> mpx;
    for(int i = 1; i<=x; i++) {
        if(x%i == 0) {
            mpx[i] = true;
            // cout<<"xi   "<<i<<endl;
        }
    }
    for(int i = 1; i<=y; i++) {
        if(y%i == 0 && mpx[i]) {
            yy = i;
            // cout<<"xi   "<<i<<endl;
        }
    }

    xx = x/yy;
    zz = z/xx;
    // cout<<xx<<yy<<zz<<endl;
    cout<<4*(xx+yy+zz)<<endl;
    
    return 0;
}