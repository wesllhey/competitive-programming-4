#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int t, g, m, x;

  scanf("%d", &t);

  while (t--) {
    scanf("%d %d", &g, &m);

    int maxG = 0, maxM = 0;
    
    for (int i = 0; i < g; ++i) {
      scanf("%d", &x);

      maxG = max(maxG, x);
    }

    for (int i = 0; i < m; ++i) {
      scanf("%d", &x);

      maxM = max(maxM, x);
    }

    printf(maxM > maxG ? "MechaGodzilla\n" : "Godzilla\n");
  }
}

