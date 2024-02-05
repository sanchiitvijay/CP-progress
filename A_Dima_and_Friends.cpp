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
    int t = num/(n+1);
    ++t;
    if(t*(n+1) + 1 == num) {
        cout<<2<<endl;
    }
    else {
        cout<<1<<endl;;
    }
    return 0;
}