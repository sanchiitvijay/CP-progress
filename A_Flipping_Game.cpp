#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, one=0;
    cin>>n;
    int arr[n];
    vector<int> v;
    for(int i = 0; i<n; i++) {
        cin>>arr[i];
        if(arr[i] == 1) {
            v.push_back(i);
            one++;
        }
    }
    if(v.size() == 0) {
        cout<<n<<endl;
        return 0;
    }
    int maxi = 1;
    for(int i = 0; i<v.size()-1; i++) {
        maxi = max(v[i+1] - v[i], maxi);
    }
    if(v.size() == n) {
        cout<<one-1<<endl;
    }
    else
        cout<<one+maxi-1<<endl;
    return 0;
}