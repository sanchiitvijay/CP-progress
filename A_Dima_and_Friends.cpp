#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int num = 0;
    for(int i = 0; i<n; i++) {
        int tmp;
        cin>>tmp;
        num += tmp;
    }
    int t = 0;
    for(int i = 1; i<=5; i++) {
        if((num + i) % (n+1) != 1) {
            t++;
        }
    }
    cout<<t<<endl;
    return 0;
}