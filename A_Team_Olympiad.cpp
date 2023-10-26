#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> one;
    vector<int> two;
    vector<int> three;

    int n;
    cin>>n;

    for(int i = 1; i<=n; i++) {
        int num;
        cin>>num;
        if(num==1) one.push_back(i);
        else if(num==2) two.push_back(i);
        else if(num==3) three.push_back(i);
    }
    
    int m = min(one.size() , min(two.size() , three.size()));
    cout<<m<<endl;
    for(int i = 0; i<m; i++) {
        cout<<one[i]<<" "<<two[i]<<" "<<three[i]<<endl;
    }
    return 0;
}