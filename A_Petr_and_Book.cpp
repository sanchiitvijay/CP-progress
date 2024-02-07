#include<bits/stdc++.h>
using namespace std;
int main(){
    int p;
    cin>>p;
    int sum = 0;
    int arr[7];
    for(int i = 0; i<7; i++) {
        int tmp;
        cin>>tmp;
        sum += tmp;
        arr[i] = sum;
    }
    if((p-1)/arr[6] != 0) p =  p - ((p-1)/arr[6])*arr[6];
    
    for(int i = 0; i<7; i++) {
        if(arr[i] >= p) {
            cout<<i+1<<endl;
            break;
        }
        else if(i == 6) cout<<7<<endl;
    }

    return 0;
}