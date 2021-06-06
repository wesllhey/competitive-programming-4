#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int n, r, k, ans = 0;

  scanf("%d %d %d", &n, &r, &k);
  
  int dist = abs(r - k);

  if (k <= r) {
    if (n > r && n % 2 != r % 2) {
      ++ans;
    }

    ans += max(n, r) + r;
  } else {
    if (n > k + dist && n % 2 != r % 2) {
      ++ans;
    }
    
    ans += max(n, k + dist) + r;
  }

  printf("%d\n", ans);
}

