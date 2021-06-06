#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  char s[1];
  int x, y, n, v;

  while (scanf("%d %d", &x, &y), x && y) {
    --x,--y;
    int cx = 0, cy = 0, px = 0, py = 0;
    
    scanf("%d", &n);
      
    for (int i = 0; i < n; ++i) {
      scanf("%s %d", s, &v);

      if (s[0] == 'u') {
        cy += v;
        py = min(py + v, y);
      } else if (s[0] == 'd') {
        cy -= v;
        py = max(py - v, 0);
      } else if (s[0] == 'l') {
        cx -= v;
        px = max(px - v, 0);
      } else {
        cx += v;
        px = min(px + v, x);
      }
    }

    printf("Robot thinks %d %d\n", cx, cy);
    printf("Actually at %d %d\n", px, py);
    printf("\n");
  }
}
