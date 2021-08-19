#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  stack<string> dreams;
  string action, name;
  int queries;

  cin >> queries;

  for (int i = 0; i < queries; ++i) {
    cin >> action;

    if (action == "Sleep") {
      cin >> name;
      dreams.push(name);
    } else {
      if (action == "Kick") {
        if (!dreams.empty()) {
          dreams.pop();
        }
      } else {
        if (dreams.empty()) {
          cout << "Not in a dream\n";
        } else {
          cout << dreams.top() << "\n";
        }
      }
    }
  }
}

