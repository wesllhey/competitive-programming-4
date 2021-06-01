#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  string s;
  int ans = 0;
  unordered_map<char, int> mp;

  for (int i = 0; i < 5; ++i) {
    cin >> s;
    char c = s[0];

    mp[c]++;

    ans = max(ans, mp[c]);
  }
  
  cout << ans << "\n";
}
