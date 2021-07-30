#include <bits/stdc++.h>

using namespace std;

void rotate(vector<vector<int>> &matrix) {
  
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int tests, x1, x2, x3, x4, y1, y2, y3, y4;

  scanf("%d", &tests);
  
  for (int test = 1; test <= tests; ++test) {
    scanf("%d %d %d %d %d %d %d %d", &x1, &x2, &x3, &x4, &y1, &y2, &y3, &y4);
    // a b 
    // c d
    // ----
    // c a
    // d b
    // ----
    // d c
    // b a
    // ----
    // b d
    // a c
    if ((x1 == y1 && x2 == y2 && x3 == y3 && x4 == y4) ||
        (x1 == y2 && x2 == y4 && x3 == y1 && x4 == y3) ||
        (x1 == y4 && x2 == y3 && x3 == y2 && x4 == y1) ||
        (x1 == y3 && x2 == y1 && x3 == y4 && x4 == y2)) {
      printf("Case #%d: POSSIBLE\n", test);
    } else {
      printf("Case #%d: IMPOSSIBLE\n", test);
    }
  }
}

