#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[m];
    int largest = -1;
    for(int i = 0; i<m; i++) {
        cin>>arr[i];
        largest = max(largest, arr[i]);
    }
    vector<int> v(largest+1, 0);
    for(int i = 0; i<m; i++) {
        v[arr[i]]++;
    }
    vector<int> v2 = v;

    int maxi=0,mini=0, k = n,index=1;
    while(n) {
        if(v2[index] != 0) {
            for(int j = index; j>=1 && n>0; j--) {
                mini += j;
                n--;
                // cout<<"mini "<<mini<<"  "<<index<<"  "<<j<<endl;
            }
            v2[index]--;
        }
        else index++;
    }
    int i = largest;
    while(k--) {
        if(v[i] != 0) {
            maxi += i;
            v[i]--;
            v[i-1]++;
            // cout<<"maxi "<<maxi<<"  "<<v[i]<<"  "<<i<<endl;
        }
        else {
            i--;
            k++;
        }
    }

    cout<<maxi<<" "<<mini<<endl;
    
    return 0;
}