#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int t, n;
  char s[10];

  scanf("%d", &t);
  
  for (int i = 1; i <= t; ++i) {
    int count = 0, game = 0;

    scanf("%d", &n);
    
    for (int j = 1; j <= n; ++j) {
      scanf("%s", s);
      

      if (s[0] != 'W') {
        ++count;
      } else {
        count = 0;
      }

      if (count == 3 && !game) {
        game = j;
      }
    }
    
    printf("Case %d: ", i);
    if (game) {
      printf("%d\n", game);
    } else {
      printf("Yay! Mighty Rafa persists!\n");
    }
  }
}

