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
	int n;
	cin>>n;
	vector<int> val(n);
	for(int i=0;i<n;i++){
		cin>>val[i];
	}
	sort(val.begin(),val.end());
	for(reg i=0;i<n;i+=2){
		cout<<val[i]<<" ";
	}
	for(reg i=n-1-n%2;i>=1;i-=2){
		cout<<val[i]<<" ";
	}
	cout<<endl;
	return;
}


int main(){
	// int test;
	// cin>>test;
	// while(test--)
	solve();
	return 0;
}
