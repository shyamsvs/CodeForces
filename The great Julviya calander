#include <bits/stdc++.h>
using namespace std;

#define ll long long


void solve(){
	ll n;
	cin>>n;
	ll ncopy;
	int count = 0;
	while(n){
		ll large = INT_MIN;
		ncopy = n;
		while(ncopy){
			large = max(large, ncopy%10);
			ncopy /= 10;
		}	
		n -= large;
		count++;
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
