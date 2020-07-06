#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
	ll n,d;
	cin>>n>>d;
	string s;
	cin>>s;
	int jump = 0;
	int curind = 0;
	int dcopy = d;
	while(1){
		int index = -1;
		for(int i=curind+1;i<=d && i<n;i++){
			if(s[i] == '1'){
				index = max(index,i);
			}
		}
		if(index == -1){
			cout<<"-1"<<endl;
			return;
		}
		else{
			jump++;
			d = index + dcopy;
			curind = index;
		}
		if(index == n - 1){
			cout<<jump<<endl;
			return;
		}
	}
}
int main(){
	int test;
	// cin>>test;
	// while(test--)
	solve();
	return 0;
}
