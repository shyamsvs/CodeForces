#include <bits/stdc++.h>
using namespace std;

#define ll long long
string a,b,c;
string answer;

void solve(){
	string x,y;
    string z;
    cin>>x;
    //  cout<<endl;
    cin>>y;
    for(int i=0;i<x.length();i++){
        if(x[i] == y[i]){
            z.push_back(x[i]);
        }
        else if(x[i] > y[i]){
            z.push_back(min(x[i],y[i]));
        }
        else{
            cout<<"-1"<<endl;
            return;
        }
    }
    cout<<z<<endl;
    return;
}


int main(){
	// int test;
	// cin>>test;
	// while(test--)
	solve();
	return 0;
}
