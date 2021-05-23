#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int t, n, x, p;

  scanf("%d", &t);

  for (int i = 1; i <= t; ++i) {
    int l = 0, h = 0;

    scanf("%d", &n);

    for (int j = 0; j < n; ++j) {
      scanf("%d", &x);

      if (j > 0) {
        if (x > p) {
          ++h;
        } else if (x < p) {
          ++l;
        }
      }

      p = x;
    }

    printf("Case %d: %d %d\n", i, h, l);
  }
}

