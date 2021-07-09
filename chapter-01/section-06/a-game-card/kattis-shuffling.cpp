#include <bits/stdc++.h>

using namespace std;

string _shuffle(string cards, bool isOut) {
  string shuffled;
  bool toggle = false;

  int half = cards.size() / 2;

  if (isOut) {
    if (cards.size() & 1) {
      ++half;
    }

    toggle = true;
  }

  int start = 0, mid = half;

  while (start < half || mid < (int) cards.size()) {
    if (toggle) {
      shuffled.push_back(cards[start++]);
    } else {
      shuffled.push_back(cards[mid++]);
    }

    toggle = !toggle;
  }

  return shuffled;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int cardsNumber, shuffles = 0;
  char type[3];

  scanf("%d %s", &cardsNumber, type);
  
  string original;

  for (int i = 0; i < cardsNumber; ++i) {
    original.push_back('a' + i);
  }

  string newOrder = original;

  do {
    ++shuffles;

    if (type[0] == 'o') {
      newOrder = _shuffle(newOrder, true);
    } else {
      newOrder = _shuffle(newOrder, false);
    }
    
  } while (original != newOrder);

  printf("%d", shuffles);
}

