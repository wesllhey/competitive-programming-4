#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int t, n, f, a, e;

  scanf("%d", &t);

  while (t--) {
    ll ans = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
      scanf("%d %d %d", &f, &a, &e);
      
      ans += f * e;
    }

    printf("%lld\n", ans);
  }
}

