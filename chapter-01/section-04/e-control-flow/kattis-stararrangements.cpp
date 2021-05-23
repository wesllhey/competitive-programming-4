#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int s;

  scanf("%d", &s);
  
  printf("%d:\n", s);

  for (int i = 2; i <= s / 2 + 1; ++i) {
    int r = s % (2 * i - 1);

    if (r == 0 || r - i == 0) {
      printf("%d,%d\n", i, i - 1);
    }

    if (s % i == 0) {
      printf("%d,%d\n", i, i);
    }
  }
}

