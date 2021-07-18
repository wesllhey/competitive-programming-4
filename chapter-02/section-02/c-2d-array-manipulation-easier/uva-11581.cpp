#include <bits/stdc++.h>

using namespace std;

vector<pair<int, int>> paths = {
  {0, 1},
  {0, -1},
  {1, 0},
  {-1, 0},
};

void f(vector<vector<int>>& grid) {
  vector<vector<int>> newGrid(grid.size(), vector<int>(grid[0].size()));

  for (int i = 0; i < (int) grid.size(); ++i) {
    for (int j = 0; j < (int) grid[i].size(); ++j) {
      int value = 0;

      for (auto p : paths) {
        const int x = i + p.first, y = j + p.second;
        if (x >= 0 && x < (int) grid.size() && 
            y >= 0 && y < (int) grid.size()) {
          value += grid[x][y];
        }
      }

      newGrid[i][j] = value % 2;
    }
  }

  grid = newGrid;
}

bool isNotZero(vector<vector<int>>& grid) { 
  for (int i = 0; i < (int) grid.size(); ++i) {
    for (int j = 0; j < (int) grid[i].size(); ++j) {
      if (grid[i][j]) return true;
    }
  }

  return false;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int tests;

  scanf("%d", &tests);

  while (tests--) {
    vector<vector<int>> grid(3, vector<int>(3));

    for (int i = 0; i < 3; ++i) {
      for (int j = 0; j < 3; ++j) {
        scanf("%1d", &grid[i][j]);
      }
    }

    int ans = -1;
    
    while (isNotZero(grid)) {
      f(grid);

      ++ans;
    }

    printf("%d\n", ans);
  }
}

