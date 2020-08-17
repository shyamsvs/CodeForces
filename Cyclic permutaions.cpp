#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define reg register int

void solve(){
	ll n;
	cin >> n;
	ll fact = 1;
	ll mod = 1e9 + 7;
	ll pow = 1;
	for(reg i = 2;i<=n;i++){
		fact = (fact * i) % mod; 
	}
	//cout << fact << endl;
	for(reg i=1;i<=n - 1;i++){
		pow = (pow * 2) % mod;
	}
	//cout << pow << endl;
	//pow = pow % mod;
	ll ans = (fact - pow + mod)%mod;
	cout << ans << endl;
	return;
}


int main(){
	// int test;
	// cin>>test;
	// while(test--)
	solve();
	return 0;
}
