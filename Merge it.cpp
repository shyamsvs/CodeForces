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
int c[3];

void solve(){ 
  int n;
  cin>>n;
  memset(c, 0, sizeof c);
  int sum = 0;
  for(int i=0;i<n;++i){
    int x;
    cin>>x;
    ++c[x%3];
  }
  sum = c[0];
  int mn = min(c[1],c[2]);
  c[1] -= mn;
  c[2] -= mn;
  sum += mn;
  sum += (c[1] + c[2])/3;
  cout<<sum<<endl;
  return;
}

int main(){
	int test;
	cin>>test;
	while(test--)
	solve();
	return 0;
}
