#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,n,w;
    cin>>k>>n>>w;

    int cost = (w*(2*k + (w-1)*k))/2;
    
    if(cost > n) cout<<cost-n<<endl;
    else cout<<0<<endl;
    
    return 0;
}