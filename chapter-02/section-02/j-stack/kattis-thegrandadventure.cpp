#include <bits/stdc++.h>

using namespace std;

bool containsItem(stack<char>& items, const char c) {
  if (!items.empty() && items.top() == c) {
    items.pop();

    return true;
  }

  return false;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
 
  string path;
  int adventures;

  cin >> adventures;

  while (adventures--) {
    stack<char> items;
    bool canFinish = true;
    cin >> path;

    for (int i = 0; i < (int) path.size(); ++i) {
      const char c = path[i];

      switch (c) {
        case '.': 
          break;
        case 'b':
          canFinish = containsItem(items, '$');
          break;
        case 't':
          canFinish = containsItem(items, '|');
          break;
        case 'j':
          canFinish = containsItem(items, '*');
          break;
        default:
          items.push(c);
      }

      if (!canFinish) break;
    }

    if (canFinish && items.empty()) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }
}

