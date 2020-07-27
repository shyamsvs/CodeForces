#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
   int n;
    cin >> n;
    string s(200, 'a');
    cout << s << endl;
    for (int i = 0; i < n; ++i)
    {
        int u;
        cin >> u;
        s[u] = s[u] == 'a' ? 'b' : 'a';
        cout << s << endl;
    }
   return;
}

int main(){
	int test;
	cin>>test;
	while(test--)
	solve();
	return 0;
}
