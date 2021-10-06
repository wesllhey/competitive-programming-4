#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  
  set<string> st;
  string word;
  

  while (cin >> word) {
    string w;

    for (char& c : word) {
      if (isalpha(c)) {
        w.push_back(tolower(c));
      } else if (!w.empty()) {
        st.insert(w);
        w.clear();
      }
    }

    if (!w.empty()) {
      st.insert(w);
    }
  }

  for (auto& p : st) {
    cout << p << "\n";
  }
}

