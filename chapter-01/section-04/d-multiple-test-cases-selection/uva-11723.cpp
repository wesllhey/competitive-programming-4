#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int n, r, c = 0;

  while (scanf("%d %d", &n, &r), n || r) {
    int ans = (n + r - 1) / r - 1;

    if (ans <= 26) {
      printf("Case %d: %d\n", ++c, ans);
    } else {
      printf("Case %d: impossible\n", ++c);
    }
  }
}

