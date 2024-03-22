#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--) {
        int mini = INT_MAX, maxi = INT_MIN;
        vector<int> three;
        int n;
        cin>>n;
        while(n--)
        {
            int x,y;
            cin>>x>>y;
            if(x == 3) three.push_back(y);
            else if(x == 1) maxi = max(maxi, y);
            else if(x == 2) mini = min(mini, y);
        }

        int j = 0;
        if(mini<maxi) cout<<0<<endl;
        else{
            int ans = mini-maxi + 1;
            for(int i = 0; i < three.size(); i++) {
                if(three[i] >= maxi && three[i] <= mini) ans--;
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}