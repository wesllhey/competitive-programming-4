#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int tests, calls, duration;

  cin >> tests;

  for (int t = 1; t <= tests; ++t) {
    long long mile = 0, juice = 0;
    cin >> calls;

    for (int i = 0; i < calls; ++i) {
      cin >> duration;

      mile += duration / 30 * 10 + 10;
      juice += duration / 60 * 15 + 15;
    }
    
    cout << "Case " << t << ": ";

    if (mile < juice) {
      cout << "Mile " << mile << "\n"; 
    } else if (juice < mile) {
      cout << "Juice " << juice  << "\n";
    } else {
      cout << "Mile Juice " << juice << "\n";
    }
  }
}

