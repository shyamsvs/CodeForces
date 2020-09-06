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



class Solve{
	private:
		ll a,b;
	public:
		void solution(){
			cin >> a >> b;
			if(a == b){
				cout << "0" << endl;
				return;
			}
			if(a > b){
				int s = a - b;
				int k = s / 10;
				if(s%10 != 0) cout << k +1 << endl;
				else{
					cout << k << endl;
				}
			}
			else{
				int s = b - a;
				int k = s / 10;
				if(s % 10 != 0) cout << k+1 << endl;
				else{
					cout << k << endl;
				}
			}
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
