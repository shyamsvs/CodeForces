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
	ll n;
	cin >> n;
	vector<int> sides(n);
	for(reg i=0;i<n;i++){
		cin >> sides[i];
	}
	if((sides[0] + sides[1]) <= sides[n-1] ){
		cout << "1 2 "<< n << endl; 
		return;
	}
	cout << "-1" << endl;
	return;
}


int main(){
	int test;
	cin>>test;
	while(test--)
	solve();
	return 0;
}
