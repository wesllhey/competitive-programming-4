#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int t;

  double a, b, c;

  scanf("%d", &t);

  while (t--) {
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a + b == c || a - b == c ||
        b - a == c || a * b == c ||
        a / b == c || b / a == c) {
      printf("Possible\n");
    } else {
      printf("Impossible\n");
    }
  }
}

