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
	string s;
	cin >> s;
	bool f = true;
	for(int i=0;i<s.size();i++){
		if(s[i] !='1'){
			f = false;
			break;
		}
	}
	if(f){
		cout << s.size() << endl;
		return;
	}
	vector<int> dist(s.size());
	int c = 1;
	int j;
	for(int i=0;i<s.size();i++){
		if(s[i] == '1'){
			c=1;
			for( j=i;j<s.size()-1;j++){
				if((s[j] == '1') && (s[j+1] == '1')){
					c++;
				}
				else{
					dist.push_back(c);
					i = j;
					break;
				}
			}
			if(j==s.size()-1){
				dist.push_back(c);
				i=j;
			}
		}
		else{
			continue;
		}
		
	}
	sort(dist.begin(),dist.end(),greater<int>());
	int sum= 0;
	// for(auto p:dist){
	// 	cout << p << endl;
	// }
	for(int i=0;i<dist.size();i+=2){
		sum += dist[i];
	}
	cout << sum << endl;
	return;
}


int main(){
	int test;
	cin>>test;
	while(test--)
	solve();
	return 0;
}
