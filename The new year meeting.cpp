#include <bits/stdc++.h>
using namespace std;

#define ll long long


void solve(){
	int a,b,c;
    cin>>a>>b>>c;
    cout<<max(a,max(b,c)) - min(a,min(b,c));
	return;
}


int main(){
	// int test;
	// cin>>test;
	// while(test--)
	solve();
	return 0;
}
