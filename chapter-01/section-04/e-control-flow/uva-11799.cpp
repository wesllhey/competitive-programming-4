#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int t, n, c;

  scanf("%d",  &t);

  for (int i = 1; i <= t; ++i) {
    int ans = INT_MIN;

    scanf("%d", &n);
    
    for (int j = 0; j < n; ++j) {
      scanf("%d", &c);
      
      ans = max(c, ans);
    }

    printf("Case %d: %d\n", i, ans);
  }
}

