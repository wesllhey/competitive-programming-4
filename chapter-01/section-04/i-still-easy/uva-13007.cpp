#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int arr[] = {10000, 1000, 100, 10, 1};
  int numberOfPlayers, numberOfRounds, card, budget;

  while (scanf("%d %d", &numberOfPlayers, &numberOfRounds) != EOF) {
    int ans = 0;
    for (int i = 0; i < numberOfRounds; ++i) {
      int sum = 0, dValue = 0;

      scanf("%d", &budget);
      
      for (int j = 0; j < numberOfPlayers; ++j) {
        scanf("%d", &card);
        if (j) {
          sum += card;
        } else {
          dValue = card;
        }
      }
      
      for (int j = 0; j < 5 && budget >= sum; ++j) {
        if (budget >= sum + arr[j]) {
          ans += arr[j];

          break;
        }
      }
      
      if (dValue + sum <= budget) {
        ans -= dValue;
      }
    } 
    printf("%d\n", ans);
  }
}

