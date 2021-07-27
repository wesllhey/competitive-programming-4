#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int size, position;

  while (scanf("%d %d", &size, &position), size || position) {
    int line = size / 2 + 1, column = size / 2 + 1, direction = 1;
    int up = 1, left = 1, down = 2, right = 2;
    
    --position;

    while (position > 0) {
      if (direction == 1) {
        line += min(position, up);
        position -= up;
        up += 2;
        ++direction;
      } else if (direction == 2) {
        column -= min(left, position);
        position -= left;
        left += 2;
        ++direction;
      } else if (direction == 3) {
        line -= min(position, down);
        position -= down;
        down += 2;
        direction++;
      } else {
        column += min(position, right);
        position -= right;
        right += 2;
        direction = 1;
      } 
    }

    printf("Line = %d, column = %d.\n", line, column);
  }
}

