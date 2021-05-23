#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int t, n, p;

  scanf("%d", &t);

  while (t--) {
    int ans = 0;

    scanf("%d", &p);
    
    while (scanf("%d", &n), n) { 
      if (n > p * 2) {
        ans += n - p * 2;
      }

      p = n;
    }

    printf("%d\n", ans);
  }
}

