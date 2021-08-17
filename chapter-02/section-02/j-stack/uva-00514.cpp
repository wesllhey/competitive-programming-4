#include <bits/stdc++.h>

using namespace std;

void solve(int n) {
  while (true) {
    int c, j = 0;
    stack<int> s;

    for (int i = 0; i < n; ++i) {
      cin >> c;

      if (c == 0) {
        cout << "\n";
        return;
      }
      
      while (j < n && j != c) {
        if (!s.empty() && s.top() == c) break;

        ++j;

        s.push(j);
      }

      if (s.top() == c) s.pop();
    }

    if (s.empty()) {
      cout << "Yes\n";
    } else {
      cout << "No\n";
    }
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int n;

  while (cin >> n, n) {
    solve(n);
  }
}

