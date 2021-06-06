#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int l, x, g, current = 0, ans = 0;
  char s[5];


  scanf("%d %d", &l, &x);
  
  for (int i = 0; i < x; ++i) {
    scanf("%s %d", s, &g);

    if (s[0] == 'e') {
      if (current + g > l) {
        ++ans;
      } else {
        current += g;
      }
    } else {
      current -= g;
    }
  }

  printf("%d\n", ans);
}

