#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int b = 0, w = 0;
  string s;

  cin >> s;

  for (int i = 0; i < (int) s.size(); ++i) {
    if (s[i] == 'B') {
      ++b;
    } else {
      ++w;
    }
  }
  
  cout << (b == w ? 1 : 0);
}

