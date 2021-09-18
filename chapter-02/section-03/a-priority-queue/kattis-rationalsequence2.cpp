#include <bits/stdc++.h>

using namespace std;

int solve(const int l, const int r) {
  if (l == r) {
    return 1;
  }

  if (l > r) {
    return 2 * solve(l - r, r) + 1;
  }

  return 2 * solve(l, r - l);
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  
  int tests, l, r, test;

  cin >> tests;

  while (tests--) {
    cin >> test;
    cin >> l;
    cin.ignore();
    cin >> r;
    cout << test << " " << solve(l, r) << "\n";
  }
}

