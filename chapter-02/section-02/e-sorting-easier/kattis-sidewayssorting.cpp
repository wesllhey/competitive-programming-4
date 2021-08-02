#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int row, column, test = 0;

  while (cin >> row >> column, row || column) {
    vector<string> words(column, string(row, ' '));

    for (int j = 0; j < row; ++j) {
      for (int i = 0; i < column; ++i) {
        char c;
        cin >> c;
        words[i][j] = c;
      }
    }
    
    stable_sort(words.begin(), words.end(), [](string a, string b) -> bool{
      for (auto& c : a) {
        c = tolower(c);
      }

      for (auto& c: b) {
        c = tolower(c);
      }

      return a < b;
    });
    
    if (test++) {
      cout << "\n";
    }

    for (int i = 0; i < row; ++i) {
      for (int j = 0; j < column; ++j) {
        cout << words[j][i];
      }

      cout << "\n";
    }
  }
}
