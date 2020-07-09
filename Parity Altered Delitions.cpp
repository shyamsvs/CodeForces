#include <bits/stdc++.h>
using namespace std;

#define ll long long


void solve(){
	ll n;
	cin>>n;
	vector<int> val(n);
	int even=0;
	int odd=0;
	for(int i=0;i<n;i++){
		cin>>val[i];
	}
	sort(val.begin(),val.end());
	for(int i=0;i<n;i++){
		if(val[i] %2==0){
			even++;
		}
		else{
			odd++;			
		}
	}
	if((even == odd-1) || (odd == even-1) || (odd==even)){
		cout<<"0"<<endl;
	}
	else{
		if(even > odd){
			even = even - odd - 1;
			ll sum = 0;
			for(int i=0;i<n && even!= 0;i++){
				if(val[i]%2 == 0){
					sum += val[i];
					even--;
				}
			}
			cout<<sum<<endl;
		}
		else{
			odd = odd - even - 1;
			ll sum = 0;
			for(int i=0;i<n && odd!= 0;i++){
				if(val[i]%2 != 0){
					sum += val[i];
					odd--;
				}
			}
			cout<<sum<<endl;
		}
	}
	// for(int i=0;i<n;i++){
	// 	cout<<val[i];
	// }
	return;
}


int main(){
	// int test;
	// cin>>test;
	// while(test--)
	solve();
	return 0;
}
