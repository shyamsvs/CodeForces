#include <bits/stdc++.h>
using namespace std;

#define ll long long


void solve(){
	ll n;
	cin>>n;
	vector<int> score(n);
	for(int i=0;i<n;i++)cin>>score[i];
	int big = score[0];
	int sc=0;
	int small = score[0];
	for(int i=1;i<n;i++){
		if(score[i] > big){
			big = score[i];
			sc++;
		}
		if(score[i] < small){
			small = score[i];
			sc++;
		}
	}
	cout<<sc<<endl;
	return;
}


int main(){
	// int test;
	// cin>>test;
	// while(test--)
	solve();
	return 0;
}
