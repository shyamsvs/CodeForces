#include<iostream>
using namespace std; 

void solve(){
	int n;
	cin>>n;
	int fidx;
	int sidx;
	int val[n];
	for(int i=0;i<n;i++)cin>>val[i];
	//loop to find if a number occurs three times
	for(int i=0;i<n-1;i++){
		int count = 1;
		fidx = i;
		for(int j=i+1;j<n;j++){
			if(val[i] == val[j]){
				count++;
				sidx = j;
			}
			if(count==3){
				cout<<"YES"<<endl;
				return;
			}
		}
		if(count==2){
			if(sidx - fidx >1 ){
				cout<<"YES"<<endl;
				return;
			}
		}
	}
	cout<<"NO"<<endl;
	return;
}


int main(){
	int test;
	cin>>test;
	while(test--)
	solve();
	return 0;
}
