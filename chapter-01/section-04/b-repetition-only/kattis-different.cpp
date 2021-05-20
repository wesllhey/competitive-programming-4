#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  ll a, b;

  while (scanf("%lld %lld", &a, &b) != EOF) {
    printf("%lld\n", abs(a - b));
  }

}

