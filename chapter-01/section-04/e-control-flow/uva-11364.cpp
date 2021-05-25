#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int t, n, x;

  scanf("%d", &t);

  while (t--) {
    int mn = INT_MAX, mx = INT_MIN;
    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
      scanf("%d", &x);
      
      mn = min(mn, x);
      mx = max(mx, x);
    }
    
    printf("%d\n", (mx - mn) * 2);
  }
}

