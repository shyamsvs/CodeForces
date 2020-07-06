#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
	int n;
	cin>>n;
	if(n%2 !=0){
		cout<<"0"<<endl;
	}
	else{
		printf("%d",1<<(n/2));
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
