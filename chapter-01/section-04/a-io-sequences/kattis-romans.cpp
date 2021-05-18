#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  double X;

  scanf("%lf", &X);

  double ans = round(X * (1000.0 * (5280.0 / 4854.0)));

  printf("%d", (int) ans);
}

