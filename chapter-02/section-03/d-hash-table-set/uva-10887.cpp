#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  
  int tests, first, second;

  cin >> tests;

  for (int test = 1; test <= tests; ++test) {
    cin >> first >> second;

    string arr1[first], arr2[second];
    
    cin.ignore();
    for (int i = 0; i < first; ++i) {
      getline(cin, arr1[i]);
    }

    for (int i = 0; i < second; ++i) {
      getline(cin, arr2[i]);
    }
    
    unordered_set<string> st;

    for (int i = 0; i < first; ++i) {
      for (int j = 0; j < second; ++j) {
        st.insert(arr1[i] + arr2[j]);
      }
    }

    cout << "Case " << test << ": " << st.size() << "\n";
  }
}
