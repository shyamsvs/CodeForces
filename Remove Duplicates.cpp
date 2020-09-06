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
		vector<int> inp;
		vector<int> ans;
		int in;
	public:
		void solution(){
			cin >> n;
			for(reg i=0;i<n;i++){
				cin >> in;
				inp.push_back(in);
			}
			ans.push_back(inp[n-1]);
			for(reg i=inp.size() - 2;i>=0; i--){
				bool present = false;
				for(reg j=0;j<ans.size();j++){
					if(inp[i] == ans[j]){
						present = true;
					}
				}
				if(!present){
					ans.push_back(inp[i]);
				}
			}
			cout << ans.size() << endl;
			for(reg i=ans.size() - 1;i>=0;i--){
				cout << ans[i] << " ";
			}
			cout << endl;
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
