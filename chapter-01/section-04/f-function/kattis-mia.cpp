#include <bits/stdc++.h>

using namespace std;

int getScore(int a, int b) {
  int h = max(a, b);
  int l = min(a, b);

  if (h == 2 && l == 1) {
    return INT_MAX;
  }

  if (h == l) {
    return 100 * h;
  }

  return 10 * h + l;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int a, b, c, d;

  while (scanf("%d %d %d %d", &a, &b, &c, &d), a || b || c || d) {
    int p1 = getScore(a, b);
    int p2 = getScore(c, d);

    if (p1 > p2) {
      printf("Player 1 wins.\n");
    } else if (p2 > p1) {
      printf("Player 2 wins.\n");
    } else {
      printf("Tie.\n");
    }
  }
}

