#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  string name;
  int test, databaseSize, querySize, lowest, highest, price;

  cin >> test;

  while (test--) {
    cin >> databaseSize;
    pair<string, pair<int, int>> database[databaseSize]; 

    for (int i = 0; i < databaseSize; ++i) {
      cin >> name >> lowest >> highest;

      database[i] = {name, {lowest, highest}};
    }

    cin >> querySize;

    for (int q = 0; q < querySize; ++q) {
      cin >> price;
      
      int count = 0;
      string result;

      for (int i = 0; i < databaseSize; ++i) {
        auto maker = database[i];

        if (maker.second.first <= price && maker.second.second >= price) {
          result = maker.first;
          ++count;
        }
      }

      if (count == 0 || count > 1) {
        cout << "UNDETERMINED\n";
      } else {
        cout << result << "\n";
      }
    }
  }
}

