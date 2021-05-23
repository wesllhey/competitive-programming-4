#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int n, c = 0, x;

  while (scanf("%d", &n) != EOF) {
    int mn = INT_MAX, mx = INT_MIN;
    
    for (int i = 0; i < n; ++i) {
      scanf("%d", &x);

      mn = min(mn, x);
      mx = max(mx, x);
    }
    
    printf("Case %d: %d %d %d\n", ++c, mn, mx, mx - mn);
  }
}

