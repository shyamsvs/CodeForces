#include <bits/stdc++.h>
using namespace std;

#define ll long long


void solve(){
    ll n,k;
    cin>>n>>k;
    int need = (k - 1) / (n - 1);
    cout<<k+need<<endl;
    return;
}

int main(){
	int test;
	cin>>test;
	while(test--)
	solve();
	return 0;
}
