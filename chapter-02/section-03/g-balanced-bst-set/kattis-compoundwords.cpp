#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  
  vector<string> words;
  string s;

  set<string> st;

  while (cin >> s) {
    if (!words.empty()) {
      for (auto& word : words) {
        st.insert(word + s);
        st.insert(s + word);
      }
    }

    words.push_back(s);
  }

  for (auto& p : st) {
    cout << p << "\n";
  }
}

