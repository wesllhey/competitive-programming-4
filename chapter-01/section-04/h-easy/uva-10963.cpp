#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int t, n;

  scanf("%d", &t);

  while (t--) {
    bool canClose = true;
    int diff = 0, prevDiff = 0, x, y;
    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
      scanf("%d %d", &x, &y);
      
      diff = abs(x - y);

      if (i && diff != prevDiff && canClose) {
        canClose = false;
      }

      prevDiff = diff;
    }
    
    if (canClose) {
      printf("yes\n");
    } else {
      printf("no\n");
    }

    if (t >= 1) {
      printf("\n");
    }
  }
}

