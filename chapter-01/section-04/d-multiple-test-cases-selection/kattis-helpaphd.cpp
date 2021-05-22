#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int t;
  string s;
  
  cin >> t;

  while (t--) {
    string s;

    cin >> s;

    size_t p = s.find('+');

    if (p != string::npos) {
      int a = stoi(s.substr(0, p));
      int b = stoi(s.substr(p + 1, s.size() - p + 1));

      cout << a + b << "\n";
    } else {
      cout << "skipped\n";
    }
  }
}

