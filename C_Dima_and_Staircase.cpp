#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
	cin>>n;
	long long stairs[n];
	for (int i = 0; i < n;++i)
		cin>>stairs[i];
	int m;
	cin>>m;
	++m;
	while(--m){
		int w, h;
		cin>>w>>h;
		long long stops = max(stairs[w - 1], stairs[0]);
		stairs[w - 1] = stairs[0] = stops + h;
		cout<<stops<<endl;;
	}
	return 0;

}