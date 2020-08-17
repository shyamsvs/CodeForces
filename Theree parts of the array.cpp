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
	vector<ll> array(n);
	vector<ll> presumarray(n);
	vector<ll> postsumarray(n);
	for(reg i=0 ; i<n;i++)cin >> array[i];
	presumarray[0] = array[0];	
	postsumarray[n - 1] = array[n - 1];
	for(reg i=1;i<n;i++){
		presumarray[i] = presumarray[i - 1] + array[i];
	}
	for(reg i=n - 2;i>=0;i--){
		postsumarray[i] = postsumarray[i + 1] + array[i];
	}
	ll ans = 0;
	// for(reg i =0;i<n;i++)cout<<array[i] << " ";
	// cout << endl;
	
	// for(reg i =0;i<n;i++)cout<<presumarray[i] << " ";
	// cout << endl;
	
	// for(reg i =0;i<n;i++)cout<<postsumarray[i] << " ";
	// cout << endl;

	ll left = 0;
	ll right = n - 1;
	while(left < right){
		if(presumarray[left] < postsumarray[right]){
			left++;
		}
		else if (presumarray[left] > postsumarray[right]){
			right--;
		}
		else{
			ans = max(ans , presumarray[left]);
			left++;
			right--;
		}
	}
	cout << ans << endl;
	return;
}


int main(){
	// int test;
	// cin>>test;
	// while(test--)
	solve();
	return 0;
}
