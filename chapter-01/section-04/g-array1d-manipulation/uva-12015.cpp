#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int t, v;
  string url;

  cin >> t;

  for (int i = 1; i <= t; ++i) {
    vector<pair<int, string>> arr(10);

    for (int j = 0; j < 10; ++j) {
      cin >> url >> v;

      arr[j] = {v, url};
    }
  
    auto cmp = [](pair<int, string> &a, pair<int, string> &b) {
      return b.first < a.first;
    };

    sort(arr.begin(), arr.end(), cmp);

    const int maxV = arr[0].first;
    
    cout << "Case #" << i << ":\n";

    for (int j = 0; j < 10; ++j) {
      if (arr[j].first != maxV) break;

      cout << arr[j].second << "\n";
    }
  }
}
