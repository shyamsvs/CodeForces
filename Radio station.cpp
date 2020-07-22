#include <bits/stdc++.h>
using namespace std;

#define ll long long
string a,b,c;
string answer;

void solve(){
	int i,j,k,m,n;
    string s,t;
    map<string, string> mp;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>s>>t;
        t += ";";
        mp[t] = s;
    }
    for(i=0;i<m;i++)
    {
        cin>>s>>t;
        cout<<s<<" "<<t<<" #"<<mp[t]<<endl;
    }
    return; 
}


int main(){
	// int test;
	// cin>>test;
	// while(test--)
	solve();
	return 0;
}
