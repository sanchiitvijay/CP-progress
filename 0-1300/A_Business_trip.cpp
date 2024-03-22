#include<bits/stdc++.h>
using namespace std;
int main(){
    int cm;
    cin>>cm;
    int check = 0;
    int arr[12];
    for(int i = 0; i<12; i++) {
        cin>>arr[i];
        check += arr[i];
    }
    if(cm > check) {
        cout<<-1<<endl;
        return 0;
    }
    sort(arr, arr+12);
    reverse(arr, arr+12);
    int sum = 0;
    int i = 0;
    while(sum < cm) {
        sum += arr[i++];
    }
    cout<<i<<endl;
    return 0;
}