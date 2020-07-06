#include <bits/stdc++.h>
using namespace std;

#define ll long long


void solve(){
	int n, v;
    cin >> n >> v;
    if (n-1 <= v) {
        cout << n-1 << endl;
        return;
    }
    int result = v - 1;
    for(int i = 1; i <= n - v; ++i) {
        result += i;
    }
    cout << result << endl;
	return;
}


int main(){
	// int test;
	// cin>>test;
	// while(test--)
	solve();
	return 0;
}
