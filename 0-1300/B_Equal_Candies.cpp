#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i =0; i<t; i++) {
        int n;
        cin>>n;
        int sum=0;
        int mini=INT_MAX;

        for(int i = 0; i<n; i++) {
            int num;
            cin>>num;
            mini = min(mini,num);
            sum += num;
        }

        cout<<sum-n*mini<<endl;
    }
    return 0;
}