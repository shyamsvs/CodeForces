#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
   int n;
   cin>>n;
   int a[n];
   bool fm = true;
   for(int i=0;i<n;i++)cin>>a[i];
   int k = 0;
   while(k < n && a[k] == 1) {
      k++;
   }
   cout << ((k == n) ^ (k % 2) ? "Second" : "First") << '\n';
   return;
}

int main(){
	int test;
	cin>>test;
	while(test--)
	solve();
	return 0;
}
