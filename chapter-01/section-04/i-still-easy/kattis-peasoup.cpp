#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  string r, s, ans;
  int n, k;
  
  cin >> n;

  while (n--) {
    bool ps = false, pa = false;
    cin >> k;

    getline(cin, r);
    getline(cin, r);
    
    for (int i = 0; i < k; ++i) {
      getline(cin, s);
      
      if (s == "pea soup") {
        ps = true;
      } else if (s == "pancakes") {
        pa = true;
      }
    }

    if (ps && pa && ans.empty()) {
      ans = r;
    }
  }
  
  if (ans.empty()) {
    cout << "Anywhere is fine I guess\n";
  } else {
    cout << ans << "\n";
  }
}

