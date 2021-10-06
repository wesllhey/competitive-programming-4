#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  
  int days, bills, bill;

  while (cin >> days, days) {
    ll ans = 0;
    multiset<int> mst;

    for (int i = 0; i < days; ++i) {
      cin >> bills;

      for (int j = 0; j < bills; ++j) {
        cin >> bill;

        mst.insert(bill);
      }

      auto first = mst.begin(), end = --mst.end();

      ans += *end - *first;

      mst.erase(first);
      mst.erase(end);
    }

    cout << ans << "\n";
  }
}

