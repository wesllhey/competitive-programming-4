#include <bits/stdc++.h>

using namespace std;

struct game {
  string faceUp;
  string faceDown;
};

void swap(game& player) {
  if (player.faceDown.empty()) {
    reverse(player.faceUp.begin(), player.faceUp.end());
    player.faceDown = player.faceUp;
    player.faceUp.clear();
  }
}

bool hasCards(game& player) {
  return !player.faceDown.empty() || !player.faceUp.empty();
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
 
  int tests;

  cin >> tests;

  for (int test = 0; test < tests; ++test) {
    game jane, john;

    cin >> jane.faceDown >> john.faceDown;

    if (test) cout << "\n";

    int turns = 0;

    while (turns < 1000 && hasCards(jane) && hasCards(john)) {
      swap(jane);
      swap(john);

      char janeCard = jane.faceDown[0], johnCard = john.faceDown[0];
      
      jane.faceUp = janeCard + jane.faceUp;
      jane.faceDown.erase(0, 1);

      john.faceUp = johnCard + john.faceUp;
      john.faceDown.erase(0, 1);
      
      if (janeCard == johnCard) {
        if (random() / 141 % 2) {
          john.faceUp = jane.faceUp + john.faceUp;
          jane.faceUp.clear();

          cout << "Snap! for John: " << john.faceUp << "\n";
        } else {
          jane.faceUp = john.faceUp + jane.faceUp;
          john.faceUp.clear();
          
          cout << "Snap! for Jane: " << jane.faceUp << "\n";
        }
      }

      ++turns;
    }

    if (turns == 1000) {
      cout << "Keeps going and going ...\n";
    } else if (hasCards(john)) {
      cout << "John wins.\n";
    } else {
      cout << "Jane wins.\n";
    }
  }
}
