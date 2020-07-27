#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    ll n, k, l, c, d, p, nl, np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	cout << min(min(k * l / nl, c * d), p / np) / n << endl;
    return;
}

int main(){
	// int test;
	// cin>>test;
	// while(test--)
	solve();
	return 0;
}
