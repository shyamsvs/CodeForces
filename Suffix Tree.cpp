#include <bits/stdc++.h>
using namespace std; 

string a;

void solve(){
	cin>>a;
	if(a[a.size() - 1] == 'o'){
		cout<<"FILIPINO";
	}
	else if(a[a.size() - 1] == 'u'){
		cout<<"JAPANESE";
	}
	else{
		cout<<"KOREAN";
	}
	cout<<endl;
	return;
}


int main(){
	int test;
	cin>>test;
	while(test--)
	solve();
	return 0;
}
