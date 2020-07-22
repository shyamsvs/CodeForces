#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    int n; 
    cin >> n;
	long long ans = 0;
	for(int id = 2; id < n; id++)
		ans += 1ll * id * (id + 1);
	cout << ans << endl;
    return;
}

int main(){
	// int test;
	// cin>>test;
	// while(test--)
	solve();
	return 0;
}
