#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
 
  string type, garb;
  int tests, orders, quantity, price;
  
  cin >> tests;

  while (tests--) {
    map<int, int, greater<int>> buy;
    map<int, int> sell;
    long long stockPrice = -1;
    cin >> orders;
    while (orders--) {
      cin >> type >> quantity >> garb >> garb >> price;

      if (type == "buy") {
        buy[price] += quantity;
      } else {
        sell[price] += quantity;
      }

      while (!buy.empty() && !sell.empty() &&
          buy.begin()->first >= sell.begin()->first) {
        const int qty = min(buy.begin()->second, sell.begin()->second);

        buy.begin()->second -= qty;
        sell.begin()->second -= qty;
        
        stockPrice = sell.begin()->first;

        if (!buy.begin()->second) {
          buy.erase(buy.begin());
        }

        if (!sell.begin()->second) {
          sell.erase(sell.begin());
        }
      }

      if (sell.empty()) {
        cout << "-";
      } else {
        cout << sell.begin()->first;
      }

      cout << " ";

      if (buy.empty()) {
        cout << "-";
      } else {
        cout << buy.begin()->first;
      }

      cout << " ";

      if (stockPrice != -1) {
        cout << stockPrice;
      } else {
        cout << "-";
      }

      cout << "\n";
    }
  }
}

