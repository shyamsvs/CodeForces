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
	ll m,n;
	cin >> m >> n;
	vector<vector<char>> matrix(m , vector<char>(n));
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin >> matrix[i][j];
		}
	}
	//cout<<"Here";
	if(m == 1 && n ==1){
		cout<<"0"<<endl;
		return;
	}
	int count = 0;
	for(int i=0,j=n-1;i<m-1;i++){
		if(matrix[i][j] != 'D'){
			count++;
		}
	}
	for(int i=m-1,j=0;j<n-1;j++){
		if(matrix[i][j] != 'R'){
			count++;
		}
	}
	cout<<count<<endl;
	return;
}


int main(){
	int test;
	cin>>test;
	while(test--)
	solve();
	return 0;
}
