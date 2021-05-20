#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int t, n, m;

  scanf("%d", &t);

  while (t--) {
    scanf("%d %d", &n, &m);
    
    n -= 2;
    m -= 2;

    int v = ceil(n / 3.0);
    int h = ceil(m / 3.0);

    printf("%d\n", v * h);
  }
}

