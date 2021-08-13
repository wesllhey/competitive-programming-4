#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  string name;
  int size, test = 0;
  
  while (cin >> size, size) {
    vector<string> ans(size);
    
    for (int i = 0; i < size; ++i) {
      cin >> name;
      
      if (i % 2 == 0) {
        ans[i / 2] = name;
      } else {
        ans[size - 1 - i / 2] = name;
      }
    }
    
    cout << "SET " << ++test << "\n";
    for (int i = 0; i < size; ++i) {
      cout << ans[i] << "\n";
    }
  }
}

