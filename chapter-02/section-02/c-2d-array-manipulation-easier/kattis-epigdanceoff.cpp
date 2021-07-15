#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int n, m, moves = 1;

  cin >> n >> m;
  
  vector<string> dance(n);

  for (int i = 0; i < n; ++i) {
    cin >> dance[i];
  }

  for (int column = 0; column < m; ++column) {
    bool isColumnEmpty = true;
    for (int row = 0; row < n; ++row) {
      if (dance[row][column] == '$') {
        isColumnEmpty = false;
        break;
      }
    }

    if (isColumnEmpty) {
      ++moves;
    }
  }

  cout << moves;
}

