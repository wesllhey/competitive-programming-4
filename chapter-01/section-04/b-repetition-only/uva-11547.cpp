#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int t, n;

  scanf("%d", &t);

  while (t--) {
    scanf("%d", &n);

    int ans = ((((n * 567 / 9 + 7492) * 235 / 47) - 498) % 100) / 10;

    printf("%d\n", abs(ans)); 
  }
}

