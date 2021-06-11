#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int t;
  string universe;

  cin >> t;

  while (t--) {
    int ans = 0;
    stack<int> starts;
    
    cin >> universe;

    for (int i = 0; i < (int) universe.size(); ++i) {
      if (universe[i] == '\\') {
        starts.push(i);
      } else if (universe[i] == '/' && !starts.empty()) {
        ans += i - starts.top();
        starts.pop();
      }
    }

    printf("%d\n", ans);
  }
}

