#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int tests, N, M, x;

  cin >> tests;

  while (tests--) {
    cin >> N >> M;
    
    int ans = 0;
    unordered_map<int, int> mp;

    for (int i = 0; i < N; ++i) {
      cin >> x;

      mp[x]++;
    }

    for (int i = 0; i < M; ++i) {
      cin >> x;

      mp[x]--;
    }

    for (auto& p : mp) {
      ans += abs(p.second);
    }

    cout << ans << "\n";
  }
}
