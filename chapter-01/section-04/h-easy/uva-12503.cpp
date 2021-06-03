#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int t, n, moves[101], index;
  char s[25];
  
  scanf("%d", &t);

  while (t--) {
    int ans = 0, p = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
      scanf("%s", s);
      
      if (s[0] == 'R') {
        moves[p] = 1;
      } else if (s[0] == 'L') {
        moves[p] = -1;
      } else {
        scanf("%*s %d", &index);
        moves[p] = moves[index - 1];
      }

      ans += moves[p++];
    }
    
    printf("%d\n", ans);
  }
}

