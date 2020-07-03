#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
	ll a;
	int count = 0;
	cin>>a;
	if(a==1){
		cout<<"0"<<endl;
		return;
	}
	while(1){
		if(a % 6 != 0){
			a *= 2;
			count++;
			if(a % 6 != 0){
				cout<<"-1"<<endl;
				return ;
			}
		}
		a /= 6;
		count++;
		if(a==1)break;
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
