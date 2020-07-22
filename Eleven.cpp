#include <bits/stdc++.h>
using namespace std;

#define ll long long
string a,b,c;
string answer;

void solve(){
	int a;
    cin>>a;
    ll fib[15] = {1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987};
    for(int i = 1;i<=a;i++){
        if(i==1 || i==2 || i==3 || i==5 || i==8 || i==13 || i==21 || i==34 || i==55 || i==89 || i==144 
        || i==233 || i==377 || i==610 || i==987  ){
            cout<<"O";
        }
        else{
            cout<<"o";
        }
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
