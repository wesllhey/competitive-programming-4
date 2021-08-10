#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int mountains, mountain, maxHeight = 0, minHeight = INT_MAX;

  scanf("%d", &mountains);
  
  stack<pair<int, int>> s;

  for (int i = 0; i < mountains; ++i) {
    scanf("%d", &mountain);
    
    if (s.empty()) {
      s.push({mountain, i});
      continue;
    }

    if (mountain > s.top().first) {
      if (i > s.top().second + 1) {
        maxHeight = max(maxHeight, s.top().first - minHeight);
      }
        
      minHeight = mountain;
      s.pop();
      s.push({mountain, i});
    } else {
      minHeight = min(minHeight, mountain);

      if (i > s.top().second + 1) {
        maxHeight = max(maxHeight, mountain - minHeight);  
      }
    }
  }

  printf("%d", maxHeight);
}

