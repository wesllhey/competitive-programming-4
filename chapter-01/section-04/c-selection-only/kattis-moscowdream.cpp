#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int a, b, c, n;

  scanf("%d %d %d %d", &a, &b, &c, &n);

  if (a && b && c && a + b + c >= n && n >= 3) {
    printf("YES\n");
  } else {
    printf("NO\n");
  }
}

