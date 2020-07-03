#include<iostream>
#include<algorithm>
#include<limits.h>
#include <bits/stdc++.h>
using namespace std; 

void solve(){
	int n;
	cin>>n;
	int s[n];
	for(int i=0;i<n;i++)cin>>s[i];
	if(n==1 && s[0] != 0 && s[0] != 15){
		cout<<"-1"<<endl;
		return;
	}
	else if(n == 1 &&  s[0] == 0){
		cout<<"UP"<<endl;
		return;
	}
	else if(n == 1 && s[0] == 15){
		cout<<"DOWN"<<endl;
		return;
	}
	else{
		if(s[n-1] > s[n-2] && s[n-1] != 15){
			cout<<"UP"<<endl;
			return;
		}
		else if(s[n-1] > s[n-2] && s[n-1] == 15){
			cout<<"DOWN"<<endl;
			return;
		}
		else if(s[n-1] < s[n-2] && s[n-1] != 0){
			cout<<"DOWN"<<endl;
			return;
		}
		else{
			cout<<"UP"<<endl;
			return;
		}
	}
}


int main(){
	// int test;
	// cin>>test;
	// while(test--)
	solve();
	return 0;
}
