#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int participantsNumber, points, rounds, score;
  string name;

  cin >> participantsNumber >> points >> rounds;
  
  for (int i = 0; i < participantsNumber; ++i) {
    cin >> name;
  }
  
  unordered_map<string, int> mp;
  unordered_set<string> winners;

  while (rounds--) {
    cin >> name >> score;

    mp[name] += score;
    
    if (mp[name] >= points && winners.find(name) == winners.end()) {
      winners.insert(name);

      cout << name << " wins!\n";
    }
  }
  
  if (winners.empty()) {
    cout << "No winner!\n";
  }
}
