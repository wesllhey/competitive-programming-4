#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int tests;

  scanf("%d", &tests);

  while (tests--) {
    int wall[10][10] = {0};

    for (int i = 0; i < 9; i += 2) {
      for (int j = 0; j <=i; j += 2) {
        scanf("%d", &wall[i][j]);
      }
    }
    
    int a, b, c;
    for (int i = 8; i > 0; i -= 2) {
      for (int j = 0; j < i; j += 2) {
        a = wall[i][j];
        b = wall[i][j + 2];
        c = wall[i - 2][j];
        
        wall[i][j + 1] = (c - b - a) / 2;
        wall[i - 1][j] = wall[i][j] + wall[i][j + 1];
        wall[i -1][j + 1] = wall[i][j + 1] + wall[i][j + 2];
      }
    }

    for (int i = 0; i < 9; ++i) {
      for (int j = 0; j <= i; j++) {
        if (j) printf(" ");

        printf("%d", wall[i][j]);
      }
      printf("\n");
    }
  } 
}

