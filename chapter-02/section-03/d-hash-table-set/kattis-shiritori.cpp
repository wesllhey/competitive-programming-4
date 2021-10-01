#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;

  cin >> n;
  
  vector<string> words(n);
  unordered_set<string> st;
  
  for (int i = 0; i < n; ++i) {
    cin >> words[i];
  }

  for (int i = 0; i < n; ++i) {
    if (i) {
      const char lastLetter = words[i - 1].back();
      const char currentLetter = words[i][0];

      if (lastLetter != currentLetter || st.count(words[i])) {
        if (i & 1) {
          cout << "Player 2 lost\n";
        } else {
          cout << "Player 1 lost\n";
        }

        return 0;
      }
    }

    st.insert(words[i]);
  }

  cout << "Fair Game\n";
}
