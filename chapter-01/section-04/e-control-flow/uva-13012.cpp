#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int t, x;

  while (scanf("%d", &t) != EOF) {
    int ans = 0;
    
    for (int i = 0; i < 5; ++i) {
      scanf("%d", &x);

      if (x == t) {
        ++ans;
      }
    }

    printf("%d\n", ans);
  }
}

