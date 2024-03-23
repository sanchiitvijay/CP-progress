#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    int a = abs(x) + abs(y);

    int x1 = a,y1 = a;
    if(x < 0) x1 = -a;
    if(y<0) y1 = -a;
    if(x1 > 0)
        cout<<0<<" "<<y1<<" "<<x1<<" "<<0<<endl;
    else
        cout<<x1<<" "<<0<<" "<<0<<" "<<y1<<endl;

    return 0;
}