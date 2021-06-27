#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  string name;
  int groupSize, amount, receivingSize, test = 0;

  while (cin >> groupSize) {
    unordered_map<string, int> personPerIndex;
    vector<pair<string, long long>> persons(groupSize);

    for (int i = 0; i < groupSize; ++i) {
      cin >> name;

      personPerIndex[name] = i;
      persons[i] = {name, 0};
    }
    
    for (int i = 0; i < groupSize; ++i) {
      cin >> name >> amount >> receivingSize;

      const int personIndex = personPerIndex[name];
      persons[personIndex].second -= amount;

      if (receivingSize) {
        const int givenValue = amount / receivingSize;

        for (int j = 0; j < receivingSize; ++j) {
          cin >> name;
          const int receivingIndex = personPerIndex[name];
          persons[receivingIndex].second += givenValue;
        }

        persons[i].second += amount % receivingSize;
      } else { 
        persons[personIndex].second += amount;
      }
    }
    
    if (test++) {
      cout << "\n";
    }

    for (int i = 0; i < groupSize; ++i) {
      const auto person = persons[i];

      cout << person.first << " " << person.second << "\n";
    }
  }
}

