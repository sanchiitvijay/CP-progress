#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool flag = true;
    bool flag2 = false;
    while(flag) {
        n++;
        int t = n;
        int arr[10]={0};
        flag2 = true;
        while(t != 0 && flag2) {
            int tmp = t%10;
            t = t/10;
            if(arr[tmp] != 0) {
                flag2 = false;
            }
            else arr[tmp]++;
        }
        if(flag2) {
            cout<<n<<endl;
            flag = false;
        }
    }
    return 0;
}