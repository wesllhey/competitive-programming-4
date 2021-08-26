#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  string side;
  int tests, ferryLength, cars, carLength;

  cin >> tests;

  while (tests--) {
    int ans = 0;
    cin >> ferryLength >> cars;
    
    queue<double> left, right;

    for (int i = 0; i < cars; ++i) {
      cin >> carLength >> side;

      if (side == "left") {
        left.push(carLength / 100.0);
      } else {
        right.push(carLength / 100.0);
      }
    }
    
    bool isOnLeft = true;
    while (!left.empty() || !right.empty()) {
      double length = 0;
      if (isOnLeft) {
        while (!left.empty() && left.front() + length <= ferryLength) {
          length += left.front();
          left.pop();
        }
      } else {
        while (!right.empty() && right.front() + length <= ferryLength) {
          length += right.front();
          right.pop();
        }
      }

      isOnLeft = !isOnLeft;
      ++ans;
    }
    cout << ans << "\n";
  }
}

