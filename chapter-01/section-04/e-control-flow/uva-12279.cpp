#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int n, x, t = 0;

  while (scanf("%d", &n), n) {
    int r = 0, g = 0;
    for (int i = 0; i < n; ++i) {
      scanf("%d", &x);

      if (x) {
        ++r;
      } else {
        ++g;
      }
    } 

    printf("Case %d: %d\n", ++t, r - g);
  }
}

