#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int width, height, subBoards, x1, y1, x2, y2;

  while (scanf("%d %d %d", &width, &height, &subBoards),
      width || height || subBoards) {
    
    int ans = 0;
    vector<vector<bool>> matrix(height, vector<bool>(width, false));

    for (int i = 0; i < subBoards; ++i) {
      scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
      
      x1--, y1--, x2--, y2--;

      if (y1 > y2) {
        swap(y1, y2);
      }

      if (x1 > x2) {
        swap(x1, x2);
      }
        
      for (int row = y1; row <= y2; ++row) {
        for (int column = x1; column <= x2; ++column) {
          matrix[row][column] = true;
        }
      }
    }
    
    for (int i = 0 ; i < height; ++i) {
      for (int j = 0; j < width; ++j) {
        if (!matrix[i][j]) {
          ++ans;
        }
      }
    }

    if (ans == 0) {
      printf("There is no empty spots.\n");
    } else if (ans == 1) {
      printf("There is one empty spot.\n");
    } else {
      printf("There are %d empty spots.\n", ans);
    }
  }
}

