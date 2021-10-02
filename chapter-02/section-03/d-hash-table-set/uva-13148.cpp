#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;

  unordered_set<int> st;

  while (cin >> n, n) {
    if (st.find(n) != st.end()) {
      cout <<  "Special\n";

      continue;
    }
    
    long long a = pow(n, 0.5), b = pow(n, 0.3);
    
    while (a * a < n) {
      ++a;
    }

    while (b * b * b < n) {
      ++b;
    }

    if (a * a == n && b * b * b == n) {
      cout << "Special\n";
      st.insert(n);
    } else {
      cout << "Ordinary\n";
    }
  }
}
