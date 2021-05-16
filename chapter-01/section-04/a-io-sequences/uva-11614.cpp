#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int t;
  ll n;

  scanf("%d", &t);

  while (t--) {
    scanf("%lld", &n);
    
    printf("%d\n", ((int)sqrt(1 + 8 * n) - 1) / 2);
  } 
}

