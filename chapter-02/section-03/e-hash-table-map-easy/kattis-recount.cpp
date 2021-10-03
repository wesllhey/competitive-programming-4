#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  unordered_map<string, int> votes; 
  int winners = 0, count = 0;
  string s, winner;

  while (getline(cin, s), s != "***") {
    votes[s]++;

    if (votes[s] > count) {
      count = 1;
      winners = 1;
      winner = s;
      count = votes[s];
    } else if (votes[s] == count) {
      winners++;
    }
  }

  if (winners > 1) {
    cout << "Runoff!\n";
  } else {
    cout << winner << "\n";
  }
}
