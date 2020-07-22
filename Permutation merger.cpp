#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
   ll n;
   cin>>n;
   n = n * 2;
   int val[n];
   for(int i=0;i<n;i++)cin>>val[i];
   unordered_set<int> ans;
   for(int i = 0;i<n;i++){
	   if(ans.find(val[i]) == ans.end()){
		   ans.insert(val[i]);
		   cout<<val[i]<<" ";
	   }
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
