#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int t = 0, c = 0, g = 0;

  string s;

  cin >> s;
  
  for (int i = 0; i < (int) s.size(); ++i) {
    if (s[i] == 'T') {
      ++t;
    } else if (s[i] == 'C') {
      ++c;
    } else {
      ++g;
    }
  }

  int ans = t * t + c * c + g * g + min({t, c, g}) * 7;
  
  cout << ans;
}

