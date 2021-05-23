#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int t, n, last, current;

  scanf("%d", &t);

  while (t--) {
    int k = -1;

    scanf("%d %d", &n, &last);
    
    for (int i = 2; i <= n; ++i) {
      scanf("%d", &current);

      if (current != last + 1 && k == -1) {
        k = i;
      }

      last = current;
    }

    printf("%d\n", k);
  }
}

