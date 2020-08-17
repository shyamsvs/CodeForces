#include<bits/stdc++.h>
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
#include <limits>

using namespace std;
#define ll long long
#define reg register int
const int N = 100000;


void solve(){
	int n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	vector<pair<char, int>> c(n);
	for (int i = 0; i < n; ++i)
		c[i] = make_pair(s[i], i);
	sort(c.begin(), c.end());
	sort(c.begin() + k, c.end(), [&] (const pair<char, int> &a, const pair<char, int> &b) {
		return a.second < b.second;
	});	
	for (int i = k; i < n; ++i)
		cout << c[i].first;
	cout << endl;
	return;
}


int main(){
	// int test;
	// cin>>test;
	// while(test--)
	solve();
	return 0;
}
