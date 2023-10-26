#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5][5];
    pair<int,int> p;

    for(int i = 0; i<5; i++) {
        for(int j = 0; j<5; j++) {
            cin>>arr[i][j];
            if(arr[i][j]== 1){
                p.first = i;
                p.second = j;
            }
        }
    }

    cout<< abs(p.first-2) + abs(p.second-2) <<endl;

    return 0;
}