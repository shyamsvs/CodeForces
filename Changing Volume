#include<iostream>
using namespace std; 

void solve(){
	int a;
	int b;
	cin>>a>>b;
	if(a == b){
		cout<<"0"<<endl;
		return;
	}
	if(a>b){
		int t = a;
        a = b;
		b = t;        
	}
	     b-=a;
		        int count =0;
		        if(b>=5){
		            count+=(b/5);
		            b = b%5;
		        }
		        if(b>=2){
		            count+=(b/2);
		            b = b%2;
		        }
		        if(b>=1){
		            count+=b;
		            b = b%1;
		        }
	cout<<count<<endl;
	return;
}


int main(){
	int test;
	cin>>test;
	while(test--)
	solve();
	return 0;
}
