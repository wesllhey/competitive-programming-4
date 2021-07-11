#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int tests;
  char cards[52][3];
  
  scanf("%d", &tests);

  for (int test = 1; test <= tests; ++test) {
    for (int i = 0; i < 52; ++i) {
      scanf("%s", cards[i]);
    }

    printf("Case %d: %s\n", test, cards[32]);
  }
}

