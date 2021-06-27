#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int rounds, playerX, playerY;

  while (cin >> rounds >> playerX >> playerY) {
    int round = 1;

    while (abs(playerX - playerY) != 1 || min(playerX, playerY) % 2 != 1) {
      playerX = (playerX + 1) / 2;
      playerY = (playerY + 1) / 2;

      ++round;
    }

    cout << round << "\n";
  }
}

