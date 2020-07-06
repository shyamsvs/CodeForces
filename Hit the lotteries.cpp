#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
	ll a;
	cin>>a;
	//ll notes[a+1];
	//int denom[5] = {1,5,10,20,100};
	// for(int i=0;i<a+1;i++){
	// 	notes[i] = INT_MAX;
	// }
	// notes[0] = 0;
	// for(int i=0;i<5;i++){
	// 	for(int j=0;j<a+1;j++){
	// 		if(i<=j){
	// 			notes[j] = min(notes[j], 1+notes[j-i] );
	// 		}
	// 	}
	// }
	//cout<<notes[a]<<endl;
	int count = 0;
	while(a>0){
		if (a >= 100){
			count++;
			a -= 100;
		}
		else if(a >= 20){
			count++;
			a -= 20;
		}
		else if(a >= 10){
			count++;
			a -= 10;
		}
		else if(a >= 5){
			count++;
			a -= 5;
		}
		else{
			count++;
			a--;
		}
	}
	cout<<count<<endl;
	return;
}
int main(){
	int test;
	//cin>>test;
	//while(test--)
	solve();
	return 0;
}
