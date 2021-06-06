#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int n, m, k, x, minCost = INT_MAX;

  scanf("%d", &n);

  int tea[n];

  for (int i = 0; i < n; ++i) {
    scanf("%d", &tea[i]);
  }

  scanf("%d", &m);

  int toppings[m];

  for (int i = 0; i < m; ++i) {
    scanf("%d", &toppings[i]);
  }

  for (int i = 0; i < n; ++i) {
    scanf("%d", &k);
    
    for (int j = 0; j < k; ++j) {
      scanf("%d", &x);
      
      minCost = min(minCost, tea[i] + toppings[x - 1]);
    }
  }

  scanf("%d", &x);

  int ans = x / minCost;

  if (ans > 0) {
    ans--;
  }

  printf("%d\n", ans); 
}

