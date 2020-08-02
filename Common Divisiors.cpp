// ~/BAU/ACM-ICPC/Teams/A++/BlackBurn95
// ~/sudo apt-get Accpeted

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <memory.h>
#include <limits.h>
#include <math.h>
#include <string.h>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

const int N = 100001;
char s1[N + 1], s2[N + 1];
int n, m, k;
vector<int> d;

int main() {
	scanf("%s%s", s1, s2);
	n = strlen(s1), m = strlen(s2);
	k = min(n, m);

	for (int i = 1; i*i <= k; i++) {
		if (k%i == 0) {
			d.push_back(i);
			if (i != k / i) d.push_back(k / i);
		}
	}

	int ans = 0;

	for (int i = 0; i < d.size(); i++) {
		if (n%d[i] == 0 && m%d[i] == 0) {
			bool flag = 1;

			for (int a = 0, b = 0; a < n; b++, a++) {
				if (b == d[i]) b = 0;

				if (s1[a] != s1[b]) {
					flag = 0;
					break;
				}
			}

			if (flag) {
				for (int a = 0, b = 0; a < m; b++, a++) {
					if (b == d[i]) b = 0;

					if (s2[a] != s1[b]) {
						flag = 0;
						break;
					}
				}
			}

			if (flag) ans++;
		}
	}

	printf("%d\n", ans);
	return 0;
}
