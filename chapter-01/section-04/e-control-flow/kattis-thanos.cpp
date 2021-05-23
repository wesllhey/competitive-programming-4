#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int t, p, r, f;

  scanf("%d", &t);

  while (t--) {
    int ans = 0;
    scanf("%d %d %d", &p, &r, &f);

    ll currentP = p;

    while (currentP <= f) {
      currentP *= r;
      ++ans;
    }
    
    printf("%d\n", ans);
  }
}

