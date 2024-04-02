#include<bits/stdc++.h>
using namespace std;

long long int digitSum(long long int n) {
    long long int sum = 0;
    while(n) {
        sum += n%10;
        n /= 10;
    }
    return sum;
}

long long int power(long long int n,long long int a) {
    long long int ans = 1;
    while(a--) ans *= n;
    return ans;
}

int main(){
    long long int a,b,c,x;
    cin>>a>>b>>c;
    vector<long long int> ans;
    for(long long int i = 1; i<=81; i++) {
        x = (b * (power(i, a))) + c;
        // cout<<i<<"  "<<x<<endl;
        if(i == digitSum(x) && x> 0 && x<1e9) {
        // cout<<i<<"  "<<x<<endl;
            ans.push_back(x);
        }
    }
    cout<<ans.size()<<endl;
    for(auto i : ans) {
        cout<<i<<" ";
    }
    return 0;
}