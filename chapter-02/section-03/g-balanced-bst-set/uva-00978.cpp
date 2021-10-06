#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int tests, battlefields, greenNumber, blueNumber, army;

  cin >> tests;

  for (int test = 0; test < tests; ++test) {
    multiset<int, greater<int>> green, blue;

    cin >> battlefields >> greenNumber >> blueNumber;
    
    for (int i = 0; i < greenNumber; ++i) {
      cin >> army;

      green.insert(army);
    }

    for (int i = 0; i < blueNumber; ++i) {
      cin >> army;

      blue.insert(army);
    }

    while (!green.empty() && !blue.empty()) {
      const int size = min({battlefields, (int) green.size(), (int) blue.size()});

      queue<int> qGreen, qBlue;

      for (int i = 0; i < size; ++i) {
        auto pGreen = green.begin();
        auto pBlue = blue.begin();

        qGreen.push(*pGreen);
        qBlue.push(*pBlue);

        green.erase(pGreen);
        blue.erase(pBlue);
      }

      for (int i = 0; i < size; ++i) {
        int greenArmy = qGreen.front(), blueArmy = qBlue.front();
        qGreen.pop();
        qBlue.pop();

        if (greenArmy == blueArmy) continue;

        if (greenArmy > blueArmy) {
          green.insert(greenArmy - blueArmy);
        } else {
          blue.insert(blueArmy - greenArmy);
        }
      }
    }

    if (test) {
      cout << "\n";
    }

    if (green.empty() && blue.empty()) {
      cout << "green and blue died\n";
    } else if (blue.empty()) {
      cout << "green wins\n";

      for (auto& p : green) {
        cout << p << "\n";
      }
    } else {
      cout << "blue wins\n";

      for (auto& p : blue) {
        cout << p << "\n";
      }
    }
  }
}

