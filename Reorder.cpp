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


class Solve{
	private:
		int m,n;
	public:
		void solution(){
			cin >> n >> m;
			vector<int> val;
			int sum = 0;
			int a;
			for(reg i=0;i<n;i++){
				cin >> a;
				sum += a;
			}
			if(sum == m)cout << "Yes\n";
			else cout<<"No\n";
			return;
		}

};

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	Solve s;
	int testCase;
	cin >> testCase;
	while(testCase--)
		s.solution();
	return 0;
}
