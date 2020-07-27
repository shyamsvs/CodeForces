#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &it : a)cin>>it;
    int pos = n - 1;
	while (pos > 0 && a[pos - 1] >= a[pos]) --pos;
	while (pos > 0 && a[pos - 1] <= a[pos]) --pos;
	cout << pos << endl;
    return;
}

int main(){
	int test;
	cin>>test;
	while(test--)
	solve();
	return 0;
}
