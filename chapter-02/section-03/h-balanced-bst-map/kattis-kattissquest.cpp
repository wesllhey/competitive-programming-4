#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  
  string cmd;
  int commands, energy, gold;
  map<int, priority_queue<int>> quests;
  
  cin >> commands;

  while (commands--) {
    cin >> cmd >> energy;

    if (cmd == "add") {
      cin >> gold;

      quests[energy].push(gold);
    } else {
      long long ans = 0;

      while (!quests.empty()) {
        auto it = quests.lower_bound(energy);
      
        if (it == quests.end()) --it;
        
        while (it != quests.begin() && it->first > energy) {
          --it;
        }

        if (it->first > energy) break;
        
        ans += it->second.top();
        it->second.pop();

        energy -= it->first;

        if (it->second.empty()) {
          quests.erase(it);
        }
      }
      
      cout << ans << "\n";
    }
  }
}

