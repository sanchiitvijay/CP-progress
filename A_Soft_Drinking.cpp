#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,kl,c,cd,s,nl,ns;
    cin>>n>>k>>kl>>c>>cd>>s>>nl>>ns;
    int salt = s/ns;
    int beer = (k*kl)/nl;
    int lime = c*cd;
    cout<<min(salt,min(beer, lime))/n<<endl;
    return 0;
}