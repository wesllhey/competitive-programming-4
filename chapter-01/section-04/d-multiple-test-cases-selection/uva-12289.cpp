#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  string one = "one", s;
  
  int t;

  cin >> t;

  while (t--) {
    cin >> s;

    if (one.size() == s.size()) {
      int count = 0;
      
      for (int i = 0; i < (int) s.size(); ++i) {
        if (s[i] != one[i]) {
          ++count;
        }  
      }

      if (count < 2) {
        cout << "1\n";
      } else {
        cout << "2\n";
      }
    } else {
      cout << "3\n";
    }
  }
}

