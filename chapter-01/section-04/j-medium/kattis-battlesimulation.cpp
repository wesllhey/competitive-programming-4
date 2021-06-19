#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  string s, ans;

  cin >> s;
  
  for (int i = 0; i < (int) s.size(); ++i) {
    if (i < (int) s.size() - 2) {
      if (s[i] != s[i + 1] && s[i + 1] != s[i + 2] && 
        s[i] != s[i + 2]) {
        ans.push_back('C');

        i += 2;
        continue;
      }
    }

    if (s[i] == 'R') {
      ans.push_back('S');
    } else if (s[i] == 'B') {
      ans.push_back('K');
    } else {
      ans.push_back('H');
    }
  }
  cout << ans;
}

