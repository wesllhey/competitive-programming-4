#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  
  vector<int> persons(3);
  int tests, type;

  cin >> tests;
  
  for (int test = 1; test <= tests; ++test) {
    vector<unordered_set<int>> have(3);
    vector<unordered_set<int>> havenot(3);
    vector<unordered_set<int>> duplicated(3);
    
    cin >> persons[0] >> persons[1] >> persons[2];
    
    for (int i = 0; i < 3; ++i) {
      for (int j = 0; j < persons[i]; ++j) {
        cin >> type;

        have[i].insert(type);
      }
    }

    for (int i = 0; i < 3; ++i) {
      for (int j = 0; j < 3; ++j) {
        if (i == j) continue;
        
        for (auto& p : have[i]) {
          if (have[j].count(p)) {
            duplicated[i].insert(p);
          } else {
            for (int k = 0; k < 3; ++k) {
              if (k == i || k == j) continue;

              if (have[k].count(p)) {
                havenot[j].insert(p);
                break;
              }
            }
          }
        }
      }
    }
    
    cout << "Case #" << test << ":\n";
    for (int i = 0; i < 3; ++i) {
      const int unique = have[i].size() - duplicated[i].size();
      cout << unique <<  " " << havenot[i].size() << "\n";
    }
  }
}

