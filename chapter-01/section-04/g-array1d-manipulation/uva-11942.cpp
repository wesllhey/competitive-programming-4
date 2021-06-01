#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int t, x, p;

  scanf("%d", &t);
  
  printf("Lumberjacks:\n");

  while (t--) {
    bool asc = false, desc = false;
    for (int i = 0; i < 10; ++i) {
      scanf("%d", &x);
      
      if (i) {
        if (x < p) {
          asc = true;
        } else {
          desc = true;
        }
      }

      p = x;
    }
    
    if (asc && desc) {
      printf("Unordered\n");
    } else {
      printf("Ordered\n");
    }
  }
}

