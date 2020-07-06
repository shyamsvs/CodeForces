#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
	ll n;
    cin>> n;
    ll m=(sqrt(8*n+1)-1)/2;
    cout<<m<<endl;
    for(int i=1; i<m;i++)
        cout<<i<<" ",n-=i;
    cout<<n<<endl;
	return;
}


int main(){
	// int test;
	// cin>>test;
	// while(test--)
	solve();
	return 0;
}
