#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int n, v;

  scanf("%d %d", &n, &v);

  int L[n];

  for (int i = 0; i < n; ++i) {
    scanf("%d", &L[i]);
  }

  // the question asks for an ordered list, but I preferred to order anyway
  sort(L, L + n);

  cout << binary_search(L, L + n, v);
}

