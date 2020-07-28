#include <algorithm>
#include <assert.h>
#include <bitset>
#include <chrono>
#include <cstring>
#include <functional>
#include <iostream>
#include <istream>
#include <map>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <iostream>
#include <iomanip>
#include <math.h>
#include <cmath>
#include <array>
#include <complex>

using namespace std;
#define ll long long

void solve(){
	int n;
	cin >> n;
	int sum = 0;
	bool odd = false, even = false;
	for (int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		sum += x;
		odd |= x % 2 != 0;
		even |= x % 2 == 0;
	}
	if (sum % 2 != 0 || (odd && even)) cout << "YES" << endl;
	else cout << "NO" << endl;
	return;
}

int main(){
	int test;
	cin>>test;
	while(test--)
	solve();
	return 0;
}
