#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  unordered_map<string, unordered_set<int>> memoize;

  int cards, turns, index1, index2;
  string card1, card2;

  cin >> cards >> turns;

  for (int i = 0; i < turns; ++i) {
    cin >> index1 >> index2 >> card1 >> card2;

    memoize[card1].insert(index1);
    memoize[card2].insert(index2);

    if (card1 == card2) {
      cards -= 2;
      memoize.erase(card1);
    }
  }

  int pairs = 0, single = 0;

  for (auto it : memoize) {
    int size = it.second.size();

    if (size == 2) {
      ++pairs;
    } else if (size) {
      ++single;
    }
  }
  
  int visited = pairs + single;

  if (visited * 2 == cards) {
    pairs += single;
  } else if(2 * pairs + 2 == cards) {
    ++pairs;
  }

  cout << pairs;
}

