#include <bits/stdc++.h>
using namespace std;

#define ll long long


void solve(){
	ll a,b;
	cin>>a>>b;
	if(a==b){
		cout<<"0"<<endl;
		return;
	}
	else cout << 1 + int((a < b) ^ ((b - a) & 1)) << endl;
	return;
}


int main(){
	int test;
	cin>>test;
	while(test--)
	solve();
	return 0;
}
