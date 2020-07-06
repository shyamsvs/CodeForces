#include <bits/stdc++.h>
using namespace std;

#define ll long long


int cal(int num){
	int ans = 0;
	while(num){
		ans += num %10;
		num /= 10;
	}
	return ans;
}

void solve(){
	ll n;
	cin>>n;
	int ans = 0;
	while(n){
		ans++;
		if(cal(ans) == 10)n--;
	}
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
