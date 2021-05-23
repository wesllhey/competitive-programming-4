#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  ll ans = 0;
  int n, k;

  scanf("%d", &n);

  while (n--) {
    scanf("%d", &k);
    
    if (k < 0) {
      ans += k;
    }
  }

  printf("%lld", ans * -1);
}

