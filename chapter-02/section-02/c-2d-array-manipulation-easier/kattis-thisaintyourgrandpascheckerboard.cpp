#include <bits/stdc++.h>

using namespace std;

int solve(vector<string>& board) {
  for (int i = 0; i < (int) board.size(); ++i) {
    int countRow = 1, countColumn = 1;
    int blackRow = 0, whiteRow = 0, blackColumn = 0, whiteColumn = 0;
    
    for (int j = 0; j < (int) board.size(); ++j) {
      if (j) {
        if (board[i][j] == board[i][j - 1]) {
          ++countRow;
        } else {
          countRow = 1;
        }

        if (board[j][i] == board[j - 1][i]) {
          ++countColumn;
        } else {
          countColumn = 1;
        }
      }

      if (countRow >= 3 || countColumn >= 3) {
        return 0;
      }

      if (board[i][j] == 'B') {
        ++blackRow;      
      } else {
        ++whiteRow;
      }

      if (board[j][i] == 'B') {
        ++blackColumn;
      } else {
        ++whiteColumn;
      }
    }

    if (blackRow != whiteRow || blackColumn != whiteColumn) {
      return 0;
    }
  }
  
  return 1;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int n;

  cin >> n;

  vector<string> board(n);

  for (int i = 0; i < n; ++i) {
    cin >> board[i];
  }
  
  cout << solve(board);
}
