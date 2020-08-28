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
bool legal(int x,int n){
	return x>=0 && x<n;
}

void solution(){
	//(auto &p : s)cin>>p;
	string s;
	int x;
	cin >> s;
	cin >> x;
	int n = s.size();
	//char ans[n] = {'1'};
	vector<char> ans(n);
	ans.assign(n, '1'); 
	for(reg i=0;i<n;i++){
		if(s[i]=='0'){
			if(legal(i-x,n))ans[i-x] = '0';
			if(legal(i+x,n))ans[i+x] = '0'; 
		}
	}
	bool valid = true;
	for(reg i=0;i<n;i++){
		if(s[i] == '1'){
			if(legal(i-x, n) && ans[i-x] == '1')continue;
			if(legal(i+x, n) && ans[i+x] == '1')continue;
			valid = false;
		}
	}
	if(!valid){
		cout << "-1";
	}
	else{
		for(auto p:ans)cout<<p;
	}
	cout << endl;
	return;
}	


int main(){
	int testCase;
	scanf("%d", &testCase);
	while(testCase--)
		solution();
	return 0;
}
