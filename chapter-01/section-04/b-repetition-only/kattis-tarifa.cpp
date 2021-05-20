#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int x, n, p, ans = 0;

  scanf("%d %d", &x, &n);

  while (n--) {
    scanf("%d", &p);
    
    ans += x - p;
  }

  printf("%d", ans + x);
}

