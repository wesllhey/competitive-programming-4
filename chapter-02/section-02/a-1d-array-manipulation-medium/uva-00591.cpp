#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int stacksNumber, test = 0;

  while (scanf("%d", &stacksNumber), stacksNumber) {
    int bricks = 0, wall[stacksNumber], ans = 0;

    for (int i = 0; i < stacksNumber; ++i) {
      scanf("%d", &wall[i]);

      bricks += wall[i];
    }

    const int bricksPerColumn = bricks / stacksNumber;

    for (int i = 0; i < stacksNumber; ++i) {
      if (wall[i] > bricksPerColumn) {
        ans += wall[i] - bricksPerColumn;
      }
    }
    
    printf("Set #%d\n", ++test);
    printf("The minimum number of moves is %d.\n\n", ans);
  }
}

