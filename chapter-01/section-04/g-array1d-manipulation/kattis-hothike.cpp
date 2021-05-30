#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int n, c, d = 0, t = INT_MAX, p1 = INT_MAX, p2 = INT_MAX;

  scanf("%d", &n);
  
  for (int i = 1; i <= n; ++i) {
    scanf("%d", &c);

    if (i >= 3) {
      int currentMax = max({ p2, c});
      
      if (currentMax < t) {
        t = currentMax;
        d = i - 2;
      }
    }

    p2 = p1;
    p1 = c;
  }
  
  printf("%d %d", d, t);
}

