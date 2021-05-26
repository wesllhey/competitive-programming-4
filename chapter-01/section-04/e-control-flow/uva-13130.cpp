#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int n, p, x;

  scanf("%d", &n);

  while (n--) {
    bool scale = true;
    
    for (int i = 0; i < 5; ++i){
      scanf("%d", &x);

      if (i) {
        if (x != p + 1 && scale) {
          scale = false;  
        }
      }
      p = x;
    }
    
    printf(scale ? "Y\n" : "N\n");
  }
}

