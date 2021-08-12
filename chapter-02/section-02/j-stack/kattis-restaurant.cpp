#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  string action;
  int tests, plates;

  while (cin >> tests, tests) {
    int pile1 = 0, pile2 = 0;
    
    for (int i = 0; i < tests; ++i) {
      cin >> action >> plates;
      
      if (action == "DROP") {
        cout << "DROP 2 " << plates << "\n";
        pile2 += plates;
      } else if (pile1 >= plates) {
        cout << "TAKE 1 " << plates << "\n";
        pile1 -= plates;
      } else {
        const int takeFromPile1 = plates - pile1;
        
        if (pile1 > 0) {
          cout << "TAKE 1 " << pile1 << "\n";
        }

        cout << "MOVE 2->1 " << pile2 << "\n"; 
        cout << "TAKE 1 " << takeFromPile1 << "\n";

        pile1 = pile2 - takeFromPile1;
        pile2 = 0;
      }
    }

    cout << "\n";
  }
}

