#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    ll x,y,z;
	cin>>x>>y>>z;
	ll large = max(x,max(y,z));
	ll small = min(x,min(y,z));
	if((large == x && large == y) || (large == x && large == z) || (large == y && large ==z) ){
		cout<<"YES"<<endl;
		cout<<large<<" "<<small<<" "<<small<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	return;
}

int main(){
	int test;
	cin>>test;
	while(test--)
	solve();
	return 0;
}
