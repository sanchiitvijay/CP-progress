#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, one = 0, zero = 0, maxzero = -1, tmp;
    cin>>n;
    while(n--) {
        cin>>tmp;
        if(tmp == 1) {
            one += 1;
            if(zero > 0) zero -= 1;
        }
        else{
            zero += 1;
            if(zero > maxzero) maxzero = zero;
        }
    }
    cout<<one+maxzero<<endl;
    return 0;
}