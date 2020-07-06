#include<iostream>
using namespace std; 

void solve(){
	int n;
	cin>>n;
	int v[n];
	int t[n];
	bool valinc = true;
	bool tysame = true;
	for(int i=0;i<n;i++)cin>>v[i];
	for(int i=0;i<n;i++)cin>>t[i];
	if(n == 1 || n == 0){
		cout<<"YES"<<endl;
		return;
	}
	for(int i=1;i<n;i++){
		if(v[i-1] > v[i])
		{
			valinc = false;
		}
		if(t[i-1] != t[i])
		{
			tysame = false;
		}
	}
	if(valinc){
		cout<<"YES"<<endl;
		return;
	}
	else if(!tysame){
		cout<<"YES"<<endl;
		return;
	}
	else{
		cout<<"NO"<<endl;
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
