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
	ll n , k;
	cin >> n  >> k;
	vector<int> array(n);
	for(reg i=0;i<n;i++)cin >> array[i];
	sort(array.begin(), array.end());
	int ans = array[k - 1];
	int count = 0;
	if(k == 0 && array[0] > 1){
		cout << "1" << endl;
		return;
	}
	else if(k == 0 && array[0] == 1){
		cout << "-1" << endl;
		return;
	}
	else if(k<=n-1){
        if(array[k-1]!=array[k])
            cout<<array[k-1]<<endl;
        else
            cout<<"-1"<<endl;
    }

    else if(k==n)
        cout<<array[k-1]<<endl;
	return;
}


int main(){
	// int test;
	// cin>>test;
	// while(test--)
	solve();
	return 0;
}
