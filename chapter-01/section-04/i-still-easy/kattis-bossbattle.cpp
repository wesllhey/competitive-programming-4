#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int n;

  scanf("%d", &n);

  printf("%d\n", n <= 3 ? 1 : n - 2);
}

