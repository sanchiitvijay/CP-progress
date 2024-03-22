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
    unordered_map<int, bool> mpz;
    for(int i = 1; i<=x; i++) {
        if(x%i == 0) {
            mpx[i] = true;
        }
    }
    for(int i = 1; i<=z; i++) {
        if(z%i == 0) {
            mpz[i] = true;
        }
    }
    for(int i = 1; i<=y; i++) {
        if(y%i == 0 && mpx[i] && mpz[y/i] && mpx[z/(y/i)]) {
            yy = i;
            xx = x/yy;
            zz = z/xx;
            if(xx*yy == x && yy*zz == y && zz*xx == z)
                break;
        }
    }

    cout<<4*(xx+yy+zz)<<endl;
    
    return 0;
}