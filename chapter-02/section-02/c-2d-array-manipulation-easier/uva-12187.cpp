#include <bits/stdc++.h>

using namespace std;

const vector<pair<int, int>> directions = {
  {-1, 0},
  {0, 1},
  {1, 0},
  {0, -1}
};

void war(vector<vector<int>>& land, int heirs) {
  vector<vector<int>> newLand = land;

  for (int i = 0; i < (int) land.size(); ++i) {
    for (int j = 0; j < (int) land[i].size(); ++j) {
      const int heir = land[i][j];

      for (auto direction : directions) {
        const int x = i + direction.first, y = j + direction.second;

        if (x >= 0 && x < (int) land.size() && 
            y >= 0 && y < (int) land[x].size() && 
            (heir + 1) % heirs == land[x][y]) {
          newLand[x][y] = heir;
        }
      }
    }
  }

  land = newLand;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int heirs, height, width, battles;

  while (scanf("%d %d %d %d", &heirs, &height, &width, &battles),
      heirs && height && width && battles) {
    vector<vector<int>> land(height, vector<int>(width));

    for (int i = 0; i < height; ++i) {
      for (int j = 0; j < width; ++j) {
        scanf("%d", &land[i][j]);
      }
    }
    
    while (battles--) {
      war(land, heirs);
    }

    for (int i = 0; i < height; ++i) {
      for (int j = 0; j < width; ++j) {
        printf("%d", land[i][j]);

        if (j < width - 1) {
          printf(" ");
        }
      }

      printf("\n");
    }
  }
}

