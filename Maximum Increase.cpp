#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
	ll a;
	cin>>a;
	int val[a];
	for(int i=0;i<a;i++){
		cin>>val[i];
	}
	int maxv = -1;
	int count =1;
	for(int i=1;i<a;i++){
		if(val[i] > val[i-1])
			count++;
		else{
			maxv = max(maxv,count);
			count = 1;
		}
	}
	maxv = max(maxv,count);	
	cout<<maxv<<endl;
	return;
}
int main(){
	int test;
	//cin>>test;
	//while(test--)
	solve();
	return 0;
}
