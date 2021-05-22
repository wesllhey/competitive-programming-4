#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int t, a, b, c;

  scanf("%d", &t);

  for (int i = 1; i <= t; ++i) {
    scanf("%d %d %d", &a, &b, &c);
    
    if (b > a) {
      swap(a, b);
    }

    if (c > a) {
      swap(a, c);
    }

    if (c > b) {
      swap(c, b);
    }

    printf("Case %d: %d\n", i, b);
  }
}

