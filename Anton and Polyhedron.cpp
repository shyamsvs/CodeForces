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
	string s;
	cin>>n;
	int ans = 0;
	while(n--){
		cin>>s;
		if(s[0] == 'T'){
			ans += 4;
		}
		else if(s[0] == 'C'){
			ans += 6;
		}
		else if(s[0] == 'O'){
			ans += 8;
		}
		else if(s[0] == 'D'){
			ans += 12;
		}
		else{
			ans += 20;
		}
	}
	cout<<ans<<endl;
	return;
}

int main(){
	// int test;
	// cin>>test;
	// while(test--)
	solve();
	return 0;
}
