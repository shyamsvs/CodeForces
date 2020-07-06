#include <bits/stdc++.h>
using namespace std; 

#define ll long long 

void solve(){
	ll a,b,n;
	cin>>a>>b>>n;
	int count = 0;
	ll int ans = 0;
	while(a <= n && b <= n){
		if(b < a){
			b = b + a;
			count++;
		}
		else{
			a = a + b;
			count++;
		}
	}
	cout<<count<<endl;
	return;
}


int main(){
	int test;
	cin>>test;
	while(test--)
	solve();
	return 0;
}
