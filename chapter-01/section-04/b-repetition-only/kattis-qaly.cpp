#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int n;
  double q, y, ans = 0;

  scanf("%d", &n);

  while (n--) {
    scanf("%lf %lf", &q, &y);
    
    ans += q * y;
  }

  printf("%.03lf", ans);
}

