#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int a, b, c, x, y;

  while (scanf("%d %d %d %d %d", &a, &b, &c, &x, &y), a || b || c || x || y) {
    int card = 53, visited[53] = {};
    visited[a] = 1;
    visited[b] = 1;
    visited[c] = 1;
    visited[x] = 1;
    visited[y] = 1;

    if (a < c) {
      swap(a, c);
    }

    if (a < b) {
      swap(a, b);
    }

    if (b < c) {
      swap(b, c);
    }

    if (x < y) {
      swap(x, y);
    }
    
    if (y > a) {
      for (int i = 1; i < 53 && i < card; ++i) {
        if (!visited[i]) {
          card = i;
        }
      }  
    }

    if (x > a) {
      for (int i = a + 1; i < 53 && i < card; ++i) {
        if (!visited[i]) {
          card = i;
        }
      }
    }

    if (y > b) {
      for (int i = b + 1; i < 53 && i < card; ++i) {
        if (!visited[i]) {
          card = i;
        }
      }
    }
    
    if (card == 53) {
      card = -1;
    }

    printf("%d\n", card);
  }
}

