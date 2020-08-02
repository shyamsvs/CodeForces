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
	ll n;
	cin>>n;
	if(n <= 30){
		cout<<"NO"<<endl;
		return;
	}
	cout<<"YES"<<endl;
	if(n-30 == 6){
		cout<<"10 6 15 ";
		cout<<n-31<<endl;
	}
	else if(n-30 == 10){
		cout<<"14 6 15 ";
		cout<<n-35<<endl;
	}
	else if(n-30 == 14){
		cout<<"10 6 15 ";
		cout<<n-31<<endl;
	}
	else{
		cout<<"10 6 14 ";
		cout<<n-30<<endl;
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
