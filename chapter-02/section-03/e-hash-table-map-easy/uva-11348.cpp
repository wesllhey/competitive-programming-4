#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int tests, friendNumber, stampNumber, type;

  cin >> tests;

  for (int test = 1; test <= tests; ++test) {
    cin >> friendNumber;
    
    unordered_map<int, int> stamps;
    vector<unordered_set<int>> friends(friendNumber);

    for (int i = 0; i < friendNumber; ++i) {
      cin >> stampNumber;

      for (int j = 0; j < stampNumber; ++j) {
        cin >> type;

        friends[i].insert(type);
      }

      for (auto& v : friends[i]) {
        stamps[v]++;
      }
    }

    int size = 0;
    
    for (auto& p: stamps) {
      if (p.second == 1) {
        ++size;
      }
    }

    cout << "Case " << test << ": ";
    for (int i = 0; i < friendNumber; ++i) {
      int quantity = 0;

      for (auto& v : friends[i]) {
        if (stamps[v] == 1) {
          quantity++;
        }
      }
      
      const double ans = ((double) quantity / size) * 100;
      if (i) {
        cout << " ";
      }
      
      cout << fixed << setprecision(6) << ans << "%";
    }

    cout << "\n";
  }
}

