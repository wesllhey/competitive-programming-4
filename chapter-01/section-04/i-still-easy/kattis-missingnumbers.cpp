#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  bool ok = true;
  int n, current = 1, x;

  scanf("%d", &n);
  
  for (int i = 0; i < n; ++i) {
    scanf("%d", &x);

    while (current < x) {
      printf("%d\n", current);
      current++;

      ok = false;
    }

    current++;
  }

  if (ok) {
    printf("good job\n");
  }
}

