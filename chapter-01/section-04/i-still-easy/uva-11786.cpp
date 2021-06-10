#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int t;
  char universe[10005];

  scanf("%d", &t);

  while (t--) {
    int ans = 0;
    stack<int> starts;
    
    scanf("%s", universe);

    for (int i = 0; universe[i]; ++i) {
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

