#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int t, x, y, n, m;

  while (scanf("%d", &t), t) {
    scanf("%d %d", &n, &m);

    for (int i = 0; i < t; ++i) {
      scanf("%d %d", &x, &y);

      if (x == n || y == m) {
        printf("divisa\n");
      } else if (x < n) {
        if (y < m) {
          printf("SO\n");
        } else {
          printf("NO\n");
        }
      } else {
        if (y < m) {
          printf("SE\n");
        } else {
          printf("NE\n");
        }
      }
    }
  }
}

