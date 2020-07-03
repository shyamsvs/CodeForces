#include<iostream>
#include<algorithm>
#include<limits.h>
#include <bits/stdc++.h>
using namespace std; 

void dostuff(int arr[], int n){
	int count = 0;
	for(int i=0;i<n;i += 2){
		if(arr[i] %2 != 0 ){
			count++;
		}
	}
	cout<<count<<endl;
	return;
}

void solve(){
	int n;
	cin>>n;
	int val[n];
	int oddc = 0;
	int evenc = 0;
	for(int i=0;i<n;i++){
		cin>>val[i];
		if(val[i] % 2 == 0)evenc++;
		else
			oddc++;
	}
	if(n % 2 == 0){
		if(oddc == evenc){
			dostuff(val, n);
		}
		else{
			cout<<"-1"<<endl;
			return;
		}
	}
	else{
		if(evenc>oddc && (evenc - oddc) == 1){
			dostuff(val, n);
		}
		else{
			cout<<"-1"<<endl;
			return;
		}
	}
	return;
}


int main(){
	int test;
	cin>>test;
	while(test--)
	solve();
	return 0;
}
