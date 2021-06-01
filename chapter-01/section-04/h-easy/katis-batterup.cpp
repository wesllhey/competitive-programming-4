#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int n, x, w = 0;

  scanf("%d", &n);

  double ans = 0;

  for (int i = 0; i < n; ++i) {
    scanf("%d", &x);
    
    if (x != -1) {
      ans += x;
    } else {
      ++w;
    }
  }

  printf("%0.17lf\n", ans / (n - w));
}

