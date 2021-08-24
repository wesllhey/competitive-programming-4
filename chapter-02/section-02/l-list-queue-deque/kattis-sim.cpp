#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  string text;
  int tests;

  cin >> tests;
  cin.ignore();
 
while (tests--) {
    getline(cin, text);
    
    deque<string> dq;
    dq.push_back("");

    int index = 0;

    for (char c : text) {
      if (c == '[') {
        index = 0;
        dq.push_front("");
      } else if (c == ']') {
        index = dq.size() - 1;
      } else if (c == '<') {
        if (dq[index].empty()) {
          continue;
        }

        dq[index].pop_back();
      } else {
        dq[index].push_back(c);
      }
    }

    for (string s : dq) {
      cout << s;
    }

    if (tests) cout << "\n";
  }
}

