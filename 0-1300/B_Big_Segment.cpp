#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, l, r, minl, maxr, number(1);
    cin>>n>>minl>>maxr;
    for (int i = 2; i <= n; ++i)
    {
        cin>>l>>r;
        if (l <= minl && r >= maxr)
        {
            number = i;
        }
        else if (l < minl || r > maxr)
        {
            number = -1;
        }
        minl = min(minl, l);
        maxr = max(maxr, r);
    }
   cout<<number<<endl;
    return 0;
}