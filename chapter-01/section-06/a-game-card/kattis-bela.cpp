#include <bits/stdc++.h>

using namespace std;

unordered_map<char, int> nonDominant = {
  {'A', 11},
  {'K', 4},
  {'Q', 3},
  {'J', 2},
  {'T', 10},
  {'9', 0},
  {'8', 0},
  {'7', 0}
};

unordered_map<char, int> dominant = {
  {'A', 11},
  {'K', 4},
  {'Q', 3},
  {'J', 20},
  {'T', 10},
  {'9', 14},
  {'8', 0},
  {'7', 0}
};

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int handsNumber, ans = 0;
  char suit, card[2];

  scanf("%d %c", &handsNumber, &suit);

  for (int i = 0; i < 4 * handsNumber; ++i) {
    scanf("%s", card);

    if (card[1] == suit) {
      ans += dominant[card[0]];
    } else {
      ans += nonDominant[card[0]];
    }
  }

  printf("%d", ans);
}

