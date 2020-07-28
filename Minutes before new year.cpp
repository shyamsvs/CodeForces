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
    ll h,m;
	cin>>h>>m;
	ll ans = 1440 - ((h * 60) + (m));
	cout<<ans<<endl;
	return;
}

int main(){
	int test;
	cin>>test;
	while(test--)
	solve();
	return 0;
}
