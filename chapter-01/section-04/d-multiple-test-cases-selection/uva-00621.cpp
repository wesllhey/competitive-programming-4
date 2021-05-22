#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int t;
  string s;

  cin >> t;

  while (t--) {
    cin >> s;
    
    if (s == "1" || s == "4" || s == "78") {
      cout << "+\n";
    } else if (s.substr(s.size() - 2, 2) == "35") {
      cout << "-\n";
    } else if (s[0] == '9' && s.back() == '4') {
      cout << "*\n";
    } else {
      cout << "?\n";
    }
  }
}

