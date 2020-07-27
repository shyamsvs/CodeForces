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
int gcd(int x, int y)
{
    return (x==0)? y : gcd(y % x, x);
}
int main()
{
    int a, b, n;
    cin >> a >> b >> n;
    int k = 0;
    while (n >= 0)
    {
        ++k;
        n -= gcd((k & 1) ? a : b, n);
    }
    if (k & 1) cout << 1; else cout << 0;
    return 0;
}
