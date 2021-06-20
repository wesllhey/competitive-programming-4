#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  string s, t;
  int c;

  cin >> c;

  for (int test = 1; test <= c; ++test) {
    int diff = 0, oneDiff = 0, oneToZero = 0, zeroToOne = 0, ans = 0;
    
    cin >> s >> t;

    for (int i = 0; i < (int) s.size(); ++i) {
      if (s[i] != t[i]) ++diff;

      if (s[i] == '?' && t[i] == '1') {
        --oneDiff;
      } else if (s[i] == '0' && t[i] == '1') {
        --oneDiff;
        ++zeroToOne;
      } else if (s[i] == '1' && t[i] == '0') {
        ++oneDiff;
        ++oneToZero;
      }
    }
    
    cout << diff << ", oneDiff:" << oneDiff << ", oneToZero: " << oneToZero << ", zeroToOne:" << zeroToOne << "\n";
    if (oneDiff > 0) {
      ans = -1;
    } else {
      ans = diff - min(oneToZero, zeroToOne);
    }

    cout << "Case " << test << ": " << ans << "\n";
  }
}

