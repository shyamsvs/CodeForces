#include <bits/stdc++.h>
using namespace std; 

void solve(){
	string a;
	cin>>a;
	int even = 0;
	int odd = 0;
	for(int i=0;i<a.size();i++){
		if(a[i] %2 == 0){
			even++;
		}
		else{
			odd++;
		}
	}
	if(a.size() == 1){
		cout<<"NET"<<endl;
		return;
	}
	if(even == odd){
		if(even % 2 == 0)
			cout<<"NET"<<endl;
		else
			cout<<"DA"<<endl;
		return;
	}
	else{
		int max = even < odd ? even : odd;
		if(max % 2 == 0)
			cout<<"NET"<<endl;
		else
			cout<<"DA"<<endl;
		return;
	}
}


int main(){
	int test;
	cin>>test;
	while(test--)
	solve();
	return 0;
}
