#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int a, b;

  while (scanf("%d %d", &a, &b), a != -1 && b != -1) {
    int mx = max(a, b);
    int mn = min(a, b);

    int ans = min(mx - mn, 100 - mx + mn);

    printf("%d\n", ans);
  }
}

