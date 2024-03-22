#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    int cnt = 0;
    while(t != 0 && cnt <= 8) {
        int tmp = t%10;
        t = t/10;
        if(tmp == 4 || tmp == 7) cnt++;
    }
    if(cnt == 4 || cnt == 7) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}