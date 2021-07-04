#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  string line;
  int lines;

  while (cin >> lines, lines) {
    cin.ignore();

    int countPerLine[lines] = {0}, maxCountX = 0, ans = 0;

    for (int row = 0; row < lines; ++row) {
      getline(cin, line);
      
      int countX = 0;

      for (int i = 0; i < (int) line.size(); ++i) {
        if (line[i] == 'X') {
          ++countX;    
        } 
      }

      maxCountX = max(maxCountX, countX);

      countPerLine[row] = countX;
    }

    for (int i = 0; i < lines; ++i) {
      ans += maxCountX - countPerLine[i];
    }

    printf("%d\n", ans);
  }
}

