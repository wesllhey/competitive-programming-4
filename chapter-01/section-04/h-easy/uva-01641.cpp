#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int h, w;
  
  while (scanf("%d %d", &h, &w) != EOF) {
    int ans = 0;
    char s[h][w];
  
    for (int i = 0; i < h; ++i) {
      bool in = false;

      scanf("%s", s[i]);

      for (int j = 0; j < w; ++j) {
        if (s[i][j] == '/' || s[i][j] == '\\') {
          ++ans, in = !in;
        } else if (in) {
          ans += 2;
        }
      }
    }

    printf("%d\n", ans / 2);
  }
}

