#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int offers, maxTickets, tickets, price;

  while (cin >> offers >> maxTickets, offers || maxTickets) {
    int bestTickets = 0, bestPrice = 0;
    double bestRatio = DBL_MAX;
    
    for (int i = 0; i < offers; ++i) {
      cin >> tickets >> price;
      
      if (tickets <= maxTickets) {
        const double currentRatio = (double) price / tickets;

        if (currentRatio < bestRatio || 
            (currentRatio == bestRatio && tickets > bestTickets)) {
          bestPrice = price;
          bestRatio = currentRatio;
          bestTickets = tickets;
        }
      }
    }

    if (bestTickets) {
      cout << "Buy " << bestTickets << " tickets for $" << bestPrice << "\n";
    } else {
      cout << "No suitable tickets offered\n";
    }
  }
}

