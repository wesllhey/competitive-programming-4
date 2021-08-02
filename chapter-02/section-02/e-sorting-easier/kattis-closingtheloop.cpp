#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  string rope;
  int tests, segments;

  cin >> tests;
  
  for (int test = 1; test <= tests; ++test) {
    cin >> segments;
    vector<int> blue, red;
    
    for (int i = 0; i < segments; ++i) {
      cin >> rope;
      const int value = stoi(rope.substr(0, rope.size() - 1));

      if (rope.back() == 'B') {
        blue.push_back(value);
      } else {
        red.push_back(value);
      }
    }

    sort(blue.begin(), blue.end(), greater<int>());
    sort(red.begin(), red.end(), greater<int>());

    int ans = 0, sizePairs = min((int) blue.size(), (int) red.size());
    for (int i = 0; i < sizePairs; ++i) {
      ans += blue[i] + red[i];
    }

    ans -= sizePairs * 2;

    cout << "Case #" << test << ": " << ans << "\n";
  }
}

