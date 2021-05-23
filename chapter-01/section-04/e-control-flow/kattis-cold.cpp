#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int n, t, ans = 0;

  scanf("%d", &n);

  while (n--) {
    scanf("%d", &t);

    if (t < 0) {
      ++ans;
    }
  }

  printf("%d", ans);
}

