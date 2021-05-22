#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int n, t;

  scanf("%d", &t);

  while (t--) {
    scanf("%d", &n);

    if (n & 1) {
      printf("%d is odd\n", n);
    } else {
      printf("%d is even\n", n);
    }
  }
}

