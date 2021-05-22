#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int t, a, b;

  scanf("%d", &t);

  while (t--) {
    scanf("%d %d", &a, &b);

    if (a > b) {
      printf(">\n");
    } else if (a < b) {
      printf("<\n");
    } else {
      printf("=\n");
    }
  }
}

