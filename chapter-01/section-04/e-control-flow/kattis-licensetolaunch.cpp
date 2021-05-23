#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int n, x, minIndex = 0, minValue = INT_MAX;

  scanf("%d", &n);
  
  for (int i = 0; i < n; ++i) {
    scanf("%d", &x);

    if (x < minValue) {
      minIndex = i;
      minValue = x;
    }
  }
  
  printf("%d", minIndex);
}

