#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
 
void solve(){
	int n;
	cin>>n;
	int diff = INT_MAX;
	int s[n];
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
	sort(s,s+n);
	for(int i=1;i<n;i++){
		if(s[i] - s[i-1] < diff){
			diff = s[i] - s[i-1];
		}
	}
	cout<<diff<<endl;
}
 
int main(){
	int test;
	cin>>test;
	while(test--){
		solve();
	}
}
