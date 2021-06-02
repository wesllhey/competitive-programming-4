#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int k, n, t, sum = 0;
  char z;

  cin >> k >> n;

  while (n--) {
    cin >> t >> z;
    
    sum += t;

    if (sum >= 210) break;

    if (z != 'T') continue;
    ++k;
  }
  
  k = k % 8 == 0 ? 8 : k % 8;
  cout << k;
}

