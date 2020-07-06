#include <bits/stdc++.h>
 
using namespace std;
int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int n;
		cin >> n;
		long long ans = 0;
		for (int i = 1; i <= n / 2; ++i) {
			ans += i * 1ll * i;
		}
		cout << ans * 8 << endl;
    }
}
