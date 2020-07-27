#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    int n, a, b; scanf("%d %d %d\n", &n, &a, &b);
    int round = 0;
    for(; a != b; round++, n /= 2) {
    a = (a + 1) / 2; b = (b + 1) / 2;
    }
    if(n == 1) printf("Final!\n");
    else printf("%d\n", round);
    return;
}

int main(){
	// int test;
	// cin>>test;
	// while(test--)
	solve();
	return 0;
}
