#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int tests, price;

  scanf("%d", &tests);

  while (tests--) {
    vector<int> prices;
    ll ans = 0;
    
    while (scanf("%d", &price), price) {
      prices.push_back(price);
    } 

    sort(prices.begin(), prices.end(), greater<int>());

    for (int i = 0; i < (int) prices.size(); ++i) {
      ll newValue = 2 * pow(prices[i], i + 1);

      if (ans + newValue > 5000000) {
        ans = 0;
        break;
      } else {
        ans += newValue;
      }
    }

    if (ans) {
      printf("%lld\n", ans);
    } else {
      printf("Too expensive\n");
    }
  }
}

