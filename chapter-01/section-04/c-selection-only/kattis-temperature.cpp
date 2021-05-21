#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int x, y;

  scanf("%d %d", &x, &y);

  if (x == 0 && y == 1) {
    printf("ALL GOOD");
  } else if (y == 1) {
    printf("IMPOSSIBLE");
  } else {
    printf("%.6lf", (double) x / (1 - y));
  }
}

