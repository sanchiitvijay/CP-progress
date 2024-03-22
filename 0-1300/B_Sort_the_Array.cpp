#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i<n; i++) {
        cin>>arr[i];
    }
    vector<int> arr2 = arr;
    sort(arr2.begin(), arr2.end());

    int i = 0, j = arr.size()-1;

    while(i<=j) {
        if(arr[i] == arr2[i]) i++;
        else if(arr[j] == arr2[j]) j--;
        else break;
    }

    reverse(arr.begin()+i, arr.begin()+j+1);
    // for(int i = 0; i<n; i++) {
    //     cout<<arr[i]<<" ";
    // }

    if(arr != arr2){
        cout<<"no"<<endl;
        return 0;
    }
    if(i>j) {
        i = 0;
        j = 0;
    }
    cout<<"yes"<<endl<<i+1<<" "<<j+1<<endl;

    return 0;
}