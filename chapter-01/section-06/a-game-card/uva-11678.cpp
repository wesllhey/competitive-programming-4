#include <bits/stdc++.h>

#define MAX 100001

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int aliceCards, bettyCards, card;

  while (scanf("%d %d", &aliceCards, &bettyCards), aliceCards || bettyCards) {
    int alice[MAX] = {0}, betty[MAX] = {0}, aliceTrades = 0, bettyTrades = 0;

    for (int i = 0; i < aliceCards; ++i) {
      scanf("%d", &card);
      alice[card] = card;
    }

    for (int i = 0; i < bettyCards; ++i) {
      scanf("%d", &card);
      betty[card] = card;
    }
    
    for (int i = 0; i < MAX; ++i) {
      if (alice[i] && !betty[i]) {
        ++aliceTrades;
      }

      if (betty[i] && !alice[i]) {
        ++bettyTrades;
      }
    }
    
    printf("%d\n", min(aliceTrades, bettyTrades));
  }
}

