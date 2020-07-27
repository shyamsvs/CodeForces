#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
   ll n;
   cin>>n;
   int p=0;
   for(int i=2;i<100000;i++){
      if(n%i == 0){
         p = i;
         break;
      }
   }
   if(p == 0){
      p = n;
   }
   cout<<n/p<<" "<<(n - (n / p))<<endl;
   return;
}

int main(){
	int test;
	cin>>test;
	while(test--)
	solve();
	return 0;
}
