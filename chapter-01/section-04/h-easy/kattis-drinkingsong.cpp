#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int n;
  char s[20];

  scanf("%d\n%s", &n, s);

  for (int i = n; i > 0; --i) {
    if (i > 1) {
      printf("%d bottles of %s on the wall, %d bottles of %s.\n", i, s, i, s);

      if (i - 1 > 1) {
        printf("Take one down, pass it around, %d bottles of %s on the wall.\n\n", i - 1, s);
      } else {
        
        printf("Take one down, pass it around, %d bottle of %s on the wall.\n\n", i - 1, s);
      }
    } else {
      printf("%d bottle of %s on the wall, %d bottle of %s.\n", i, s, i, s);
      printf("Take it down, pass it around, no more bottles of %s.", s);
    }
  }


}

