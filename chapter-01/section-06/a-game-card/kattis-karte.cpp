#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  unordered_set<string> memoize;
  int p = 13, k = 13, h = 13, t = 13;

  string s;

  cin >> s;

  for (int i = 0; i < (int) s.size(); i += 3) {
    string card = s.substr(i, 3);

    if (memoize.find(card) != memoize.end()) {
      cout << "GRESKA\n";

      return 0;
    }

    memoize.insert(card);

    switch (card[0]) {
      case 'P':
        --p;
        break;
      case 'K':
        --k;
        break;
      case 'H':
        --h;
        break;
      default:
        --t;
    }
  }

  cout << p << " " << k << " " << h << " " << t << "\n";
}

