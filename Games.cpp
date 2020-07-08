#include <bits/stdc++.h>
using namespace std;

#define ll long long


void solve(){
	ll n;
	cin>>n;
	ll col[n][2];
	for(int i=0;i<n;i++){
		cin>>col[i][0];
		cin>>col[i][1];
	}
	int count=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(col[i][0] == col[j][1]){
				count++;
			}
		}
	}
	cout<<count<<endl;
	return;
}


int main(){
	// int test;
	// cin>>test;
	// while(test--)
	solve();
	return 0;
}
