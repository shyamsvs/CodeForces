#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
	int n,k;
	cin>>n>>k;
	int sum1 =0;
	int sum2 =0;
	int toadd;
	int val[n];
	for(int i=0;i<n;i++)cin>>val[i];
	for(int i=0;i<n;i++){
		sum1 += val[i];
	}
	for(int i=1;i<n;i++){
		val[i] = val[i] + max(0,(k - val[i] - val[ i-1]));
	}
	for(int i=0;i<n;i++){
		sum2 += val[i];
	}
	cout<<sum2-sum1<<endl;
	for(int i=0;i<n;i++){
		cout<<val[i]<<" ";
	}
	return;
}
int main(){
	int test;
	//cin>>test;
	//while(test--)
	solve();
	return 0;
}
