#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  string s;
  int c = 0;
  while (cin >> s, s != "*") {
    if (s == "Hajj") {
      cout << "Case " << ++c << ": Hajj-e-Akbar\n";
    } else {
      cout << "Case " << ++c << ": Hajj-e-Asghar\n";
    }
  } 
}

