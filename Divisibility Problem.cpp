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
    ll a,b;
	cin>>a>>b;
	int ans = (a%b==0)?0:b-(a%b);
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
