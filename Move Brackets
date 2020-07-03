#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
	int a;
	cin>>a;
	char val[a];
	for(int i=0;i<a;i++)cin>>val[i];
	int ans=0;
	int bal=0;
	for(int i=0;i<a;i++){
		if(val[i] == '(')bal++;
		else{
			bal--;
			if(bal<0){
				bal=0;
				ans++;
			}
		}
	}
	cout<<ans<<endl;
	return;
}
int main(){
	int test;
	cin>>test;
	while(test--)
	solve();
	return 0;
}
