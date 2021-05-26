#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int p, a, b, c, d, n;

  scanf("%d %d %d %d %d %d", &p, &a, &b, &c, &d, &n);

  double maxPrice = 0, maxDecline = 0;

  for (int k = 1; k <= n; ++k) {
    double price = p * (sin(a * k + b) + cos(c * k + d) + 2);
    
    if (k > 1) {
      double decline = maxPrice - price;

      maxDecline = max(maxDecline, decline);
      maxPrice = max(maxPrice, price);

    } else {
      maxPrice = price;
    }
  }

  printf("%.9lf\n", maxDecline);
}

