#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 2e5 + 5;
int n, x;
int a[N], f[2];

void solve(){
    f[0] = f[1] = 0;
    	cin >> n >> x;
    	for(int i = 1; i <= n; i++)
    	{
    		cin >> a[i];
    		f[a[i] % 2]++;
    	}
    	bool flag = 0;
    	for(int i = 1; i <= f[1] && i <= x; i += 2) 
    	{
    		int have = f[0], need = x - i;
    		if(need <= f[0])
    	        flag = 1;
    	}
    	if(flag)
    	    cout << "Yes" << endl;
    	else
    	    cout << "No" << endl;
        return;
	}

int main(){
	int test;
	cin>>test;
	while(test--)
	solve();
	return 0;
}
