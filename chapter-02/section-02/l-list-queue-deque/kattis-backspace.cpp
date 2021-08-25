#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  string text;

  cin >> text;

  deque<char> d;

  for (char c : text) {
    if (c == '<') {
      if (!d.empty()) {
        d.pop_back();
      }
    } else {
      d.push_back(c);
    }
  }

  while (!d.empty()) {
    cout << d.front();
    d.pop_front();
  }
}

