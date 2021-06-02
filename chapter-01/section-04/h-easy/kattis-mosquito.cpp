#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int m, p, l, e, r, s, n;

  while (scanf("%d %d %d %d %d %d %d", &m, &p, &l, &e, &r, &s, &n) != EOF) {
    for (int i = 0; i < n; ++i) {
      int newm = p / s;
      p = l / r;
      l = m * e;
      m = newm;
    }
    printf("%d\n", m);
  }
}
