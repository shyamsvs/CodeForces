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
		ll a1,a2;
		int minutes = 0;
	public:
		void solution(){
			cin >> a1 >> a2;
			if(a1 == 1 && a2 == 1){
				cout << "0" << endl;
				return;
			}
			while(a1 !=0 && a2 !=0){
				minutes++;
				if(a1 > a2){
					a1 -= 2;
					a2 += 1;
				}
				else{
					a1 += 1;
					a2 -= 2;
				}
			}
			cout << minutes << endl;
			return;
		}

};

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	Solve s;
	// int testCase;
	// scanf("%d", &testCase);
	// while(testCase--)
		s.solution();
	return 0;
}
