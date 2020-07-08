#include <bits/stdc++.h>
using namespace std;

#define ll long long


void solve(){
	ll a;
	cin>>a;
	if(a%4!=0){
		cout<<"NO"<<endl;
		return;
	}
	int ans[a] = {0};
	int evensum = 0;
	int oddsum=0;
	cout<<"YES"<<endl;
	for(int i=2;i<=a;i+=2){
		cout<<i<<" ";
		evensum += i;
	}
	for(int i=1;i<=a-3;i+=2){
		cout<<i<<" ";
		oddsum += i;
	}
	cout<<evensum-oddsum<<endl;
	return;
}


int main(){
	int test;
	cin>>test;
	while(test--)
	solve();
	return 0;
}
