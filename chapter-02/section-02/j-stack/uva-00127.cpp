#include <bits/stdc++.h>

using namespace std;

bool matchPile(vector<stack<pair<char, char>>>& piles, 
    int index, int targetIndex) {
  
  if (piles[index].top().first == piles[targetIndex].top().first ||
      piles[index].top().second == piles[targetIndex].top().second) {
    return true;
  }

  return false;

}
int matchIndex(vector<stack<pair<char, char>>>& piles, int currentIndex) {
  if (currentIndex >= 3) {
    if (matchPile(piles, currentIndex, currentIndex - 3)) {
      return currentIndex - 3;
    }
  }

  if (currentIndex >= 1) {
    if (matchPile(piles, currentIndex, currentIndex - 1)) {
      return currentIndex - 1;
    }
  }

  return -1;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  string card;

  while (cin >> card, card != "#") {
    vector<stack<pair<char, char>>> piles(1);
    
    piles[0].push({card[0], card[1]});

    for (int c = 1; c < 52; ++c) {
      cin >> card;

      piles.push_back({});
      piles[piles.size() - 1].push({card[0], card[1]});

      for (int index = 1; index < (int) piles.size(); ++index) {
        int currentIndex = matchIndex(piles, index);
        int lastIndex = -1;

        while (currentIndex != -1) {
          lastIndex = currentIndex;
          currentIndex = matchIndex(piles, currentIndex);
        }

        if (lastIndex != -1) {
         piles[lastIndex].push(piles[index].top());
         
         piles[index].pop();
         
         if (piles[index].empty()) {
          piles.erase(piles.begin() + index);
         }

         index = lastIndex - 1;
        }
      }
    }
    
    cout << piles.size() << " ";

    if (piles.size() == 1) {
      cout << "pile remaining: ";
    } else {
      cout << "piles remaining: ";
    }

    for (int i = 0; i < (int) piles.size(); ++i) {
      if (i) cout << " ";
        
      cout << piles[i].size();
    }
    cout << "\n";
  }
}

