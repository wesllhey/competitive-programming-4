#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int t, n, k, p;

  scanf("%d", &t);

  for (int i = 1; i <= t; ++i) {
    scanf("%d %d %d", &n, &k, &p);

    int ans = (k + p) % n;

    if (!ans) {
      ans = n;
    }

    printf("Case %d: %d\n", i, ans);
  }
}

