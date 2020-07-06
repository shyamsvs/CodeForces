#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
	ll a;
	cin>>a;
	ll val[a];
	for(int i=0;i<a;i++)cin>>val[i];
	// int sumarr[a];
	// int sumarrc = 0;
	ll i,j;
	ll maxsum = 0;
	for(i=0;i<a;){
		bool pos;
		if(val[i] == 0){
			i++;
			//maxsum = 0;
			continue;
		}
		pos = val[i] > 0;
		if(pos){
			ll big = INT_MIN;
			for(j=i;j<a && val[j] > 0; j++){
				big = max(big,val[j]);
			}
			maxsum += big;
			i = j;
		}
		else{
			ll big = INT_MIN;
			for(j=i;j<a && val[j] < 0; j++){
				big = max(big,val[j]);
			}
			maxsum += big;
			i = j;
		}
	}
	cout<<maxsum<<endl;
	return;
}


int main(){
	int test;
	cin>>test;
	while(test--)
	solve();
	return 0;
}
