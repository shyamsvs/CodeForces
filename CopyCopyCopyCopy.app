#include <bits/stdc++.h>
using namespace std;

#define ll long long


void solve(){
	int n;
	cin>>n;
	vector<int> val(n);
	for(int i=0;i<n;i++)cin>>val[i];
	sort(val.begin(),val.end());
	int count = 1;
	for(int i=1;i<n;i++){
		if(val[i-1] < val[i]){
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
