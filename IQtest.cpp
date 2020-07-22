#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
   int n;
   cin>>n;
   int a[n];
   int odd = 0;
   int even = 0;
   int lastodd;
   int lasteven;
   for(int i=0;i<n;i++){
      cin>>a[i];
      if(a[i]%2 == 0){
         even++;
         lasteven = i;
      }
      else{
         odd++;
         lastodd = i;
      }
   }
   if(odd == 1){
      cout<<lastodd+1;
   }
   else{
      cout<<lasteven+1;
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
