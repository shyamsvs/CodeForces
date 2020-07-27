#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    ll a,b,c;
	cin>>a>>b>>c;
	ll p,q,r,s;
	ll ans;
	p = a + c + b;
	q = a + c + c + a;
	r = b + b + a + a;
	s = b + c + c + b;
	ans = min(p,min(q,min(r,s)));
	cout<<ans<<endl;
    return;
}

int main(){
	// int test;
	// cin>>test;
	// while(test--)
	solve();
	return 0;
}
