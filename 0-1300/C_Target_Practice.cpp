#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 0; i<t; i++) {
        int sum = 0;
        for(int j = 0; j<10; j++) {
            for(int k = 0; k<10; k++) {
                char ch;
                cin>>ch;
                if(ch == 'X') {
                    if(j==0 || k==0 || j==9 || k==9) {
                        sum+=1;
                    }
                    else if(j==1 || k==1 || j==8 || k==8) {
                        sum+=2;
                    }
                    else if(j==2 || k==2 || j==7 || k==7) {
                        sum+=3;
                    }
                    else if(j==3 || k==3 || j==6 || k==6) {
                        sum+=4;
                    }
                    else if(j==4 || k==4 || j==5 || k==5) {
                        sum+=5;
                    }
                }
            }
        }
        cout<<sum<<endl;
        
    }
    return 0;
}