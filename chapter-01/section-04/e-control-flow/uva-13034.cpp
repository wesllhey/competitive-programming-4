#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int t, x;

  scanf("%d", &t);

  for (int i = 1; i <= t; ++i) {
    bool can = true;
    for (int j = 0; j < 13; ++j) {
      scanf("%d", &x);

      if (!x){
        can = false;
      } 
    }

    if (can) {
      printf("Set #%d: Yes\n", i);
    } else {
      printf("Set #%d: No\n", i);
    }
  }
}

