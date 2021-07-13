#include <bits/stdc++.h>

using namespace std;

int cardValue(char card) {
  int value = 0;
  
  switch (card) {
    case 'J': value = 1; break;
    case 'Q': value = 2; break;
    case 'K': value = 3; break;
    case 'A': value = 4; break;
  }

  return value;
}

void moveHeapToDeck(deque<char>& heap, deque<char>& deck) {
  while (!heap.empty()) {
    deck.push_front(heap.front());
    heap.pop_front();
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  string card;

  while (cin >> card, card != "#") {
    deque<char> nonDealer, dealer, heap;
    
    nonDealer.push_back(card[1]);

    bool isDealerTurn = true;

    for (int i = 0; i < 51; ++i) {
      cin >> card;
      
      cout << card << "\n";

      if (isDealerTurn) {
        dealer.push_back(card[1]);
      } else {
        nonDealer.push_back(card[1]);
      }
      
      isDealerTurn = !isDealerTurn;
    }

    int winner = 0, deckSize = 0;
    while (!winner) {
      char currentCard;

      if (isDealerTurn) {
        if (dealer.empty()) {
          winner = 2, deckSize = nonDealer.size();
          break;
        }

        currentCard = dealer.back(); dealer.pop_back();
      } else {
        if (nonDealer.empty()) {
          winner = 1, deckSize = dealer.size();
          break;
        }

        currentCard = nonDealer.back(); nonDealer.pop_back();
      }

      printf("current card %c\n", currentCard);

      heap.push_back(currentCard);
      
      int value;
      while (value = cardValue(currentCard), !winner && value) {
        if (isDealerTurn) {
          bool isFaceCard = false;

          for (int i = 0; i < value; ++i) {
            if (nonDealer.empty()) {
              winner = 1; deckSize = dealer.size();
              break;
            }
              
            char cardPlayed = nonDealer.back(); nonDealer.pop_back();
              
            heap.push_back(cardPlayed);

            if (cardValue(cardPlayed)) {
              currentCard = cardPlayed; isDealerTurn = !isDealerTurn;
              isFaceCard = true;
              break;
            }
          }

          if (winner) break;

          if (isFaceCard) {
            moveHeapToDeck(heap, dealer); isDealerTurn = false;
          }
        } else {
          bool isFaceCard = false;

          for (int i = 0; i < value; ++i) {
            if (dealer.empty()) {
              winner = 2; deckSize = nonDealer.size();
              break;
            }
              
            char cardPlayed = dealer.back(); dealer.pop_back();
              
            heap.push_back(cardPlayed);

            if (cardValue(cardPlayed)) {
              currentCard = cardPlayed; isDealerTurn = !isDealerTurn;
              isFaceCard = true;
              break;
            }
          }

          if (winner) break;

          if (isFaceCard) {
            moveHeapToDeck(heap, nonDealer); isDealerTurn = true;
          }
        }
      }
      
      isDealerTurn = !isDealerTurn;
    }

    printf("delaer %ld, non-dealer %ld, heap %ld\n", dealer.size(), nonDealer.size(), heap.size());

    printf("%d%3d\n", winner, deckSize);
  }
}

