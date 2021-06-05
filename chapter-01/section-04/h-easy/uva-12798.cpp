#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int n, m, x;

  while (scanf("%d %d", &n, &m) != EOF) {
    int ans = 0;
    while (n--) {
      bool s = true;
      for (int i = 0; i < m; ++i) {
        scanf("%d", &x);

        if (!x) s = false;
      }

      if (s) ++ans;
    }

    printf("%d\n", ans);
  }
}

