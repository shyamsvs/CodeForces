#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define reg register int

void solve(){
	ll n;
	cin>>n;
	vector<int> val(n);
	for(reg i=0;i<n;++i){
		cin>>val[i];
	}
	sort(val.begin(),val.end());
	int small = INT_MAX;
	for(reg i=1;i<n;++i){
		small = min(small, abs(val[i] - val[i-1]));
	}
	int count = 0;
	for(reg i=1;i<n;i++){
		if(abs(val[i] - val[i-1]) == small){
			count++;
		}
	}
	cout<<small<<" "<<count<<endl;
	return;
}


int main(){
	// int test;
	// cin>>test;
	// while(test--)
	solve();
	return 0;
}
