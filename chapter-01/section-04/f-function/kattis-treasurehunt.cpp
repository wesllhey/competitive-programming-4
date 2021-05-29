#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int r, c;
  
  cin >> r >> c;

  string arr[r];

  for (int i = 0; i < r; ++i) {
    cin >> arr[i];
  }

  int x = 0, y = 0, ans = 0;

  while (true) {
    if (x < 0 || x >= r || y < 0 || y >= c) {
      cout << "Out\n";

      return 0;
    }

    if (ans > r * c) {
      break;
    }
    
    char d = arr[x][y];

    if (d == 'N') {
      --x;
    } else if (d == 'S') {
      ++x;
    } else if (d == 'W') {
      --y;
    } else if (d == 'E') {
      ++y;
    } else {
      cout << ans << "\n";

      return 0;
    }

    ++ans;
  }

  cout << "Lost\n";
}

