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
int mas[5], e = 3;
int main() {
    for (int i = 0; i < 4; i++) {
        cin >> mas[i];
    }
    sort(mas, mas + 4);
    for (int i = 0; i < 3; i++) {
        if (mas[i] != mas[i + 1]) {
            e--;
        }
    }
    cout << e;
}
