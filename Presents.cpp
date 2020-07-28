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
int a[110];
int main() {
    int n,e;
    cin>>n;
    int x[n+10];
    for (int i = 0; i < n; ++i) {
        cin>>x[i];
    }
    for (int i = 0; i < n; ++i) {
        a[x[i]]=i+1;
    }
    for (int i = 1; i <= n; ++i) {
        cout<<a[i]<<" ";
    }
    return 0;
}
