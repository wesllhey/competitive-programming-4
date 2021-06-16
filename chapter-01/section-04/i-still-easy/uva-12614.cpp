#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int t, numberOfCards, card;

  scanf("%d", &t);

  for (int i = 1; i <= t; ++i) {
    int ans = 0;

    scanf("%d", &numberOfCards);

    while (numberOfCards--) {
      scanf("%d", &card);

      ans = max(ans, card);
    }

    printf("Case %d: %d\n", i, ans);
  }
}

