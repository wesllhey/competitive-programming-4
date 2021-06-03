#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int t, total = 0;
  double l, w, d, we;

  scanf("%d", &t);

  while (t--) {
    scanf("%lf %lf %lf %lf", &l, &w, &d, &we);
    if (((l <= 56 && w <= 45 && d <= 25) || l + w + d <= 125) && we <= 7) {
      printf("1\n");
        
      ++total;
    } else {
      printf("0\n");
    }
  }

  printf("%d\n", total);
}

