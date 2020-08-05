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
	int subarray = n+1;
	int array[N];
	memset(array, 0 ,sizeof array);
	for(reg i=1;i<=n;i++){
		int value;
		cin>>value;
		if(array[value])
		subarray = min(subarray, i - array[value] + 1);
		array[value] = i;
	}
	if(subarray == (n+1)){
		subarray = -1;
	}
	cout<<subarray<<endl;
	return;
}


int main(){
	int test;
	cin>>test;
	while(test--)
	solve();
	return 0;
}
