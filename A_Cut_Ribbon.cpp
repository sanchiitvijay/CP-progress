#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, tmp, cnt = 0;
    vector<int> v;
    cin>>n;
    cin>>tmp;
    v.push_back(tmp);
    cin>>tmp;
    v.push_back(tmp);
    cin>>tmp;
    v.push_back(tmp);

    sort(v.begin(), v.end());
    int i = 0;
    while(n > 0) {
        if(i == 3) i = 0;
        n -= v[i++];
        if(n >= 0)
            cnt++;
    }

    cout<<cnt<<endl;

    return 0;
}