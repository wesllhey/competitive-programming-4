#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int t, n, v;

  scanf("%d", &t);

  while (t--) {
    int votes = 0, r1 = INT_MIN, r2 = INT_MIN, w = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; ++i) {
      scanf("%d", &v);

      if (v > r1) {
        w = i;
        r2 = r1;
        r1 = v;
      } else if (v > r2) {
        r2 = v;
      }

      votes += v;
    }
    
    if (r1 == r2) {
      printf("no winner\n");
    } else if (r1 > votes / 2) {
      printf("majority winner %d\n", w);
    } else {
      printf("minority winner %d\n", w);
    }
  }
}

