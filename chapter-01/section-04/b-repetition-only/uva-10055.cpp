#include <bits/stdc++.h>

using namespace std;

typedef long long int lli;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  lli a, b;

  while (scanf("%lld %lld", &a, &b) != EOF) {
    if (a > b) {
      printf("%lld\n", a - b);
    } else  {
      printf("%lld\n", b - a);
    }
  }
}

