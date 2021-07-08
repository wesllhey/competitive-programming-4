#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int tests, types, limit;

  scanf("%d", &tests);

  for (int test = 1; test <= tests; ++test) {
    scanf("%d %d", &types, &limit);

    int mangoes[types], mangoLimit, eaten = 0;

    for (int i = 0; i < types; ++i) {
      scanf("%d", &mangoes[i]);

      eaten += mangoes[i];
    }

    bool win = eaten <= limit;

    for (int i = 0; i < types; ++i) {
      scanf("%d", &mangoLimit);
      
      if (mangoes[i] > mangoLimit) {
        win = false;
      }
    }

    printf("Case %d: %s\n", test, win ? "Yes" : "No");
  } 
}

