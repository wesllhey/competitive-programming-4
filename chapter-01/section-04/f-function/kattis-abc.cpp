#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int a, b, c;
  char order[3];

  scanf("%d %d %d %s", &a, &b, &c, order);

  if (c < b) {
    swap(c, b);
  }

  if (c < a) {
    swap(c, a);
  }

  if (b < a) {
    swap(b, a);
  }

  for (int i = 0; i < 3; ++i) {
    if (order[i] == 'A') {
      printf("%d ", a);
    } else if (order[i] == 'B') {
      printf("%d ", b);
    } else {
      printf("%d ", c);
    }
  }
}

