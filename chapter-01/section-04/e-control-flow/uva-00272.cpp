#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  bool open = true;
  char c;

  while (c = cin.get(), !cin.eof()) {
    if (c == '"') {
      if (open) {
        cout << "``"; 
      } else {
        cout << "''";
      }
      
      open = !open;
    } else {
      cout << c;
    }
  }
}

