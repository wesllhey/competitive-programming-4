#include <bits/stdc++.h>

using namespace std;

const vector<pair<int, int>> pairs = {
  {-2, -1},
  {-2, 1},
  {-1, -2},
  {1, -2},
  {-1, 2},
  {1, 2},
  {2, -1},
  {2, 1}
};

bool isValidPosition(int i, int j, vector<string>& board) {
  for (auto p : pairs) {
    if (i + p.first >= 0 && i + p.first < (int) board.size() &&
        j + p.second >= 0 && j + p.second < (int) board.size()) {
      
      if (board[i + p.first][j + p.second] == 'k') {
        return false;
      }
    }
  }
  
  return true;
}


int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  vector<string> board(5);

  for (int i = 0; i < (int) board.size(); ++i) {
    cin >> board[i];
  }
  
  bool isValid = true;
  int count = 0;

  for (int i = 0; i < (int) board.size(); ++i) {
    for (int j = 0; j < (int) board.size(); ++j) {
      if (board[i][j] == 'k') {
        if (!isValidPosition(i, j, board)) {
          isValid = false;
        }

        ++count;
      }
    }
  }
  
  if (count == 9 && isValid) {
    cout << "valid";
  } else {
    cout << "invalid";
  }
}

