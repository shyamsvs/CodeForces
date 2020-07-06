#include <bits/stdc++.h>
using namespace std;

#define ll long long


void solve(){
	int a;
    cin>>a;
    string s;
    cin>>s;
    int ncount = 0;
    int rcount = 0;
    for(int i=0;i<a;i++){
        if(s[i] == 'n')ncount++;
        if(s[i] == 'r')rcount++;
    }
    while(ncount--){
        cout<<"1 ";
    }
    while(rcount--){
        cout<<"0 ";
    }
    cout<<endl;
	return;
}


int main(){
	// int test;
	// cin>>test;
	// while(test--)
	solve();
	return 0;
}
