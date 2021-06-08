#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int a, b, c, d, t;

  scanf("%d %d %d %d %d", &a, &b, &c, &d, &t);

  int distance = abs(a - c) + abs(b - d);

  if (distance <= t && distance % 2 == t % 2) {
    printf("Y\n");
  } else {
    printf("N\n");
  }
}

