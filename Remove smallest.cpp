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
	cin >> n;
	int array[n];
	for(reg i=0;i<n;i++){
		cin >> array[i];
	}
	if(n == 1){
		cout<<"YES"<<endl;
		return;
	}
	sort(array, array + n);
	for(int i=1;i<n;i++){
		if(array[i] - array[i-1] == 0 || array[i] - array[i-1] == 1){
			array[i - 1] = 0; 
		}
	}
	int count = 0;
	for(int i=0;i<n;i++){
		if(array[i] != 0){
			count++;
		}
		if(count > 1){
			cout<<"NO"<<endl;
			return;
		}
	}
	if(count == 1){
		cout<<"YES"<<endl;
	}
	return;
}


int main(){
	int test;
	cin>>test;
	while(test--)
	solve();
	return 0;
}
