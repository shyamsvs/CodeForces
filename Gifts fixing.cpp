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

const int N = 2e5 + 5;

void solve(){
	ll n;
	ll csmall = INT_MAX;
	ll osmall = INT_MAX;
	cin >> n;
	ll choco[n];
	ll orange[n];
	for(reg i=0;i<n;i++){
		cin >> choco[i];	
		csmall = min(csmall, choco[i]);
	}
	for(reg i=0;i<n;i++){
		cin >> orange[i];	
		osmall = min(osmall, orange[i]);
	}
	ll start = 0;
	ll moves = 0;
	//cout << csmall << " " << osmall << endl;
	while(n--){
		if(choco[start] == csmall && orange[start] == osmall){
			start++;
		}
		else if(choco[start] == csmall && orange[start] != osmall){
			moves += orange[start] - osmall;
			start++;
		}
		else if(choco[start] != csmall && orange[start] == osmall){
			moves += choco[start] - csmall;
			start++;
		}
		else{
			ll cdiff = choco[start] - csmall;
			ll odiff = orange[start] - osmall;
			moves +=  max(cdiff,odiff);
			start++;
		}
	}
	cout << moves << endl;
	return;
}


int main(){
	int test;
	cin>>test;
	while(test--)
	solve();
	return 0;
}
