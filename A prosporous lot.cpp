#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    int n,k;
    scanf("%d",&k);
	if (k>36) printf("%d\n",-1);
	else
	{
		while (k>0)
		{
			if (k>=2)
			{
				printf("%d",8);
				k-=2;
			} else
			{
				printf("%d",9);
				k-=1;
			}
		}
		printf("\n");
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
