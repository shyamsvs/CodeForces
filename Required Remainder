#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
	ll x,y,n;
	cin>>x>>y>>n;
	ll ans = floor(n / x) * x;
	//cout<<ans<<endl;
	ll val1 = ans-(x - y);
	ll val2 = ans+ y  <= n ? ans+ y : 0;
	//cout<<val1<<" "<<val2<<endl;
	cout<<max(val1,val2);
	cout<<endl;
	return; 	
}
int main(){
	int test;
	cin>>test;
	while(test--)
	solve();
	return 0;
}
