#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int numberWords;

  while (cin >> numberWords, numberWords) {
    string ans, word;
    int maxPairs = 0;

    for (int i = 0; i < numberWords; ++i) {
      int numberPairs = 0;
      cin >> word;

      for (int j = 0; j < (int) word.size() - 1; ++j) {
        if (j + 1 == (int) word.size()) break;

        char letter = word[j];

        if (letter == 'a' || letter == 'e' || letter == 'i' ||
            letter == 'o' || letter == 'u' || letter == 'y') {
          
          if (letter == word[j + 1]) {
            numberPairs++;
            ++j;
          }
        }
      }

      if (numberPairs >= maxPairs) {
        ans = word;
        maxPairs = numberPairs;
      }
    }

    cout << ans << "\n";
  }
}

