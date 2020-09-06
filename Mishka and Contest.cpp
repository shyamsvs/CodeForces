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
		int n;
		int k;
	public:
		void solution(){
			cin >> n >> k;
			vector<int> diff(n);
			int c = 0;
			for(auto &i : diff) cin >> i;
			int left = 0;
			int right = n - 1;
			while(1 && left<n && right >=0){
				if(diff[left] <= k){
					left++;
					c++;
				}
				else if(diff[right] <= k){
					right--;
					c++;
				}
				else{
					break;
				}
			}
			cout << c << endl;
			return;
		}

};

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	Solve s;
	// int testCase;
	// cin >> testCase;
	// while(testCase--)
		s.solution();
	return 0;
}
