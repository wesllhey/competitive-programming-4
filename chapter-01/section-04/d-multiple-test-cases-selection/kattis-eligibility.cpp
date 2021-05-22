#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int t, c;

  string n, ps, b;

  cin >> t;

  while (t--) {
    cin >> n >> ps >> b >> c;
    
    bool after2020OrLater = stoi(ps.substr(0, 4)) >= 2010;
    bool born1991OrLater = stoi(b.substr(0, 4)) >= 1991;
    
    if (after2020OrLater || born1991OrLater) {
      cout << n << " eligible\n";
    } else if (c > 40) {
      cout << n << " ineligible\n";
    } else {
      cout << n << " coach petitions\n";
    }
  }
}

