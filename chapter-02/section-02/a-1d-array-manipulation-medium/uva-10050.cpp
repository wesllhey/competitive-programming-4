#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int tests, days, partiesNumber, hartal;

  scanf("%d", &tests);

  while (tests--) {
    scanf("%d", &days);
    scanf("%d", &partiesNumber);
    
    int hartals[days + 1] = {0}, ans = 0;

    for (int i = 0; i < partiesNumber; ++i) {
      scanf("%d", &hartal);

      for (int j = hartal; j <= days; j += hartal) {
        if (j % 7 == 6 || j % 7 == 0) {
          continue;
        }

        hartals[j] = 1;
      }
    }

    for (int i = 1; i <= days; ++i) {
      ans += hartals[i];
    }

    printf("%d\n", ans);
  }
}

