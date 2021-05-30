#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int t;
  string s;

  cin >> t;

  while (t--) {
    int ans = 0, c = 0;
    
    cin >> s;

    for (int i = 0; i < (int) s.size(); ++i) {
      if (s[i] == 'O') {
        ans += ++c;
      } else {
        c = 0;
      }
    }

    cout << ans << "\n";
  }
}

