#include<bits/stdc++.h>
using namespace std;
int main(){
    string n;
    cin>>n;
    bool flag = true;
    for(int i = 0; i<n.size(); i++) {
        if(n[i] == '0') {
            n.erase(i,1);
            flag = false;
            break;
        }
    }
    if(flag) n.pop_back();
    cout<<n<<endl;

    return 0;
}