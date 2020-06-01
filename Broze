
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
 
void solve(){
	char code[200];
	cin>>code;
	int l = strlen(code);
	for(int i=0;i<l;i++){
		if(code[i] == '-' && code[i+1] == '-'){
			cout<<"2";
			i++;
		}
		else if(code[i] == '-' && code[i+1] == '.'){
			cout<<"1";
			i++;
		}
		else{
			cout<<"0";
		}
	}	
	cout<<endl;
}
 
int main(){
	solve();
	return 0;
}
