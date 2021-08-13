#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  ll number, ans = 0;
  int factor = 0;

  scanf("%lld", &number);

  string binary;

  while (number) {
    binary.push_back('0' + number % 2);

    number /= 2;
  }

  for (int i = (int) binary.size() - 1; i >= 0; --i) {
    if (binary[i] == '1') {
      ans += pow(2, factor);
    }
    
    factor++;
  }
  
  printf("%lld", ans);
}

