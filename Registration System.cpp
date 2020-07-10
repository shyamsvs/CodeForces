#include <bits/stdc++.h>
using namespace std;

#define ll long long


void solve(){
	int n;
	cin>>n;
	map<string, int> names;
	while(n--){
		string a;
		cin>>a;
		if(names.count(a) == 0){
			names[a] = 1;
			cout<<"OK"<<endl;
		}
		else{
			cout<<a<<names[a]<<endl;
			names[a] += 1;
		}
	}
	return ;
}


int main(){
	// int test;
	// cin>>test;
	// while(test--)
	solve();
	return 0;
}
