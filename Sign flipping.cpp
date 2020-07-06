#include <bits/stdc++.h>

using namespace std;

int main() {
  int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
      if (i % 2 == 0) {
        if (a[i] < 0) {
          a[i] = -a[i];
        }
      } else {
        if (a[i] > 0) {
          a[i] = -a[i];
        }
      }
    }
    for (int i = 0; i < n; i++) {
      cout << a[i] << " ";
    }
    cout << '\n';
  }
  return 0;
}
