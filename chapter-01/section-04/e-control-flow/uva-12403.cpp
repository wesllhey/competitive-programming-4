#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int t, k, ans = 0;
  char s[100];

  scanf("%d", &t);

  while (t--) {
    scanf("%s", s);

    if (s[0] == 'd') {
      scanf("%d", &k);
      ans += k;
    } else {
      printf("%d\n", ans);
    }
  }
}

