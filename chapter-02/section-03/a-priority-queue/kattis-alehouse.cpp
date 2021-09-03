#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  priority_queue<pair<int, bool>, 
    vector<pair<int, bool>>, greater<pair<int, bool>>> pq;

  int n, k, entry, exit;

  cin >> n >> k;

  for (int i = 0; i < n; ++i) {
    cin >> entry >> exit;

    pq.push({entry, false});
    pq.push({exit + k, true});
  }
  
  int ans = 0, count = 0;
  while (!pq.empty()) {
    auto p = pq.top();
    pq.pop();

    if (p.second) {
      --count;
    } else {
      ++count;
    }

    ans = max(ans, count);
  }

  cout << ans;
}

