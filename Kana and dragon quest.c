#include <bits/stdc++.h>
using namespace std;

#define ll long long


void solve(){
	int x,n,m,t;
	scanf("%d%d%d",&x,&n,&m);
	while (x>0&&n&&x/2+10<x){n--;x=x/2+10;}
	if (x<=m*10)printf("YES\n");
	else printf("NO\n"); 
	return;
}


int main(){
	int test;
	cin>>test;
	while(test--)
	solve();
	return 0;
}
