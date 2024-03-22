#include<bits/stdc++.h>
using namespace std;

int helper(vector<int> &v1, vector<int> &v2, int sum1, int sum2, int n) {
    if((sum1&1 && !(sum2&1)) || (sum2&1 && !(sum1&1))) {
        return -1;
    }

    if(!(sum1&1) && !(sum2&1)) {
        return 0;
    }

    for(int i = 0; i<n; i++) {
        if((v1[i]%2 == 0 && v2[i]%2 != 0) || (v2[i]%2 == 0 && v1[i]%2 != 0)) {
            return 1;
        }
    }
    return -1;
}

int main(){
    int n,t1,t2,sum1 = 0, sum2 = 0;
    cin>>n;
    vector<int> v1,v2;
    for(int i = 0; i<n ;i++) {
        cin>>t1>>t2;
        v1.push_back(t1);
        v2.push_back(t2);
        sum1 += t1;
        sum2 += t2;
    }
    
    cout<<helper(v1, v2, sum1, sum2, n)<<endl;
    return 0;
}