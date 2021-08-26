#include <bits/stdc++.h>

using namespace std;

class player {
public:
  string name;
  int index;
};

void addWinner(pair<player, player>& winner,
    vector<pair<string, string>>& winners) {
  string name1;
  string name2;

  if (winner.first.index < winner.second.index) {
    name1 = winner.first.name;
    name2 = winner.second.name;
  } else {
    name1 = winner.second.name;
    name2 = winner.first.name;
  }

  winners.push_back({name1, name2});
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  string name, points;
  int n;

  cin >> n;

  queue<player> q;
  pair<player, player> w, b;
  
  for (int i = 0; i < n; ++i) {
    cin >> name;

    if (i == 0) {
      w.first = {name, i};
    } else if (i == 1) {
      b.first = {name, i};
    } else if (i == 2) {
      w.second = {name, i};
    } else if (i == 3) {
      b.second = {name, i};
    } else {
      q.push({name, i});
    }
  }
  
  cin >> points;
  
  int currentScore = 0, highestScore = 0, playerIndex = n;

  char currentWinner = 'W'; 
  vector<pair<string, string>> winners;

  for (char& point : points) {
    if (point == currentWinner) {
      ++currentScore;
    } else {
      currentScore = 1;
    }
    
    if (currentScore > highestScore) {
      winners.clear();

      highestScore = currentScore;
    }

    if (currentScore >= highestScore) {
      if (point == 'W') {
        addWinner(w, winners);
      } else {
        addWinner(b, winners);
      }
    }

    if (point == 'W') {
      swap(w.first, w.second);
      
      q.push({b.second.name, playerIndex});
      swap(b.first, b.second);

      b.first = q.front();
      q.pop();
    } else {
      swap(b.first, b.second);

      q.push({w.second.name, playerIndex});

      swap(w.first, w.second);

      w.first = q.front();
      q.pop();
    }

    currentWinner = point;
    ++playerIndex;
  }
  
  for (auto& p : winners) {
    cout << p.first << " " << p.second << "\n";
  }
}

