#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int n;

  while (scanf("%d", &n), n != -1) {
    int s, t, tb = 0, ans = 0;

    for (int i = 0; i < n; ++i) {
      scanf("%d %d", &s, &t);

      ans += (t - tb) * s;
      tb = t;
    }

    printf("%d miles\n", ans);
  }
}

