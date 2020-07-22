#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
   int n;
   int m;
   cin>>n>>m;
   int a[n];
   int b[m];
   for(int i=0;i<n;i++)cin>>a[i];
   for(int i=0;i<m;i++)cin>>b[i];
   for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
         if(a[i] == b[j]){
            cout<<"YES"<<endl;
            cout<<"1 "<<a[i]<<endl;
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
