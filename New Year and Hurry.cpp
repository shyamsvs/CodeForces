#include <bits/stdc++.h>
using namespace std;

#define ll long long


void solve(){
	ll n,time;
	cin>>n>>time;
    int total = 240 - time;
	int sum = 0;
	int ans = 0;
	for(int i=1;i<=n;i++){
		sum = sum + (i * 5);
		if(sum > total){
			break;
		}
		else{
			ans++;
		}
	}
	//cout<<total<<endl;
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
