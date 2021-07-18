#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int tests, n, m;
   
  cin >> tests;
  
  while (tests--) {
    cin >> n >> m;

    vector<string> arr(n);

    for (int i = 0; i < n; ++i) {
      cin >> arr[i];
    }
    
    string ans(m, '0');

    for (int i = 0; i < m; ++i) {
      int yes = 0, no = 0;

      for (int j = 0; j < n; ++j) {
        if (arr[j][i] == '1') {
          ++yes;
        } else {
          ++no;
        }
      }

      if (yes >= no) {
        ans[i] = '1';
      }
    }

    cout << ans << "\n";
  }
}

