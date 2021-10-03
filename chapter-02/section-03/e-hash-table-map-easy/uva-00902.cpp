#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  
  int n;
  string s;

  while (cin >> n >> s) {
    int maxFrequency = 0;
    string ans;
    unordered_map<string, int> mp;

    for (int i = 0; i <= (int) s.size() - n; ++i) {
      const string key = s.substr(i, n);
    
      mp[key]++;

      if (mp[key] > maxFrequency) {
        maxFrequency = mp[key];

        ans = key;
      }
    }
  
    cout << ans << "\n";
  }
}

