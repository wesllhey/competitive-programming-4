#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int participants, budget, hotel, weeks, price, beds;

  while (scanf("%d %d %d %d", &participants, &budget, &hotel, &weeks) != EOF) {
    int ans = INT_MAX;
    for (int i = 0; i < hotel; ++i) {
      scanf("%d", &price);
    
      int maxBeds = 0;
      for (int i = 0; i < weeks; ++i) {
        scanf("%d", &beds);

        maxBeds = max(maxBeds, beds);
      }

      int cost = price * participants;
    
      if (maxBeds >= participants) {
        ans = min(cost, ans);
      }
    }

    if (ans <= budget) {
      printf("%d\n", ans); 
    } else {
      printf("stay home\n");
    }
  }
}


