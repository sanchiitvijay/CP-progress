#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int even = 0, odd = 0, tmp;
    for(int i = 0; i<n; i++) {
        cin>>tmp;
        if(tmp&1) odd++;
        else even++;
    }
    if(!(odd&1)) cout<<even<<endl;
    else cout<<odd<<endl;
    return 0;
}