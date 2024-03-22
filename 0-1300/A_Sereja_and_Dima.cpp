#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++) {
        cin>>arr[i];
    }

    int i = 0, j = n-1;
    int sum1=0, sum2=0;
    bool check = false;
    while(i<=j) {
        if(arr[i]>arr[j]) {
            if(check) {
                sum2+=arr[i];
                check = false;
            }
            else {
                sum1+= arr[i];
                check = true;
            }
            i++;
        }
        else{
            if(check) {
                sum2+=arr[j];
                check = false;
            }
            else {
                sum1+= arr[j];
                check = true;
            }
            j--;
        }
    }
    cout<<sum1<<" "<<sum2<<endl;
    return 0;
}