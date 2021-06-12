#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  string s;
  int t;

  cin >> t;
  
  cin.ignore();
  while (t--) {
    getline(cin, s);

    int countM = 0, countF = 0;

    for (int i = 0; i < (int) s.size(); ++i) {
      if (s[i] == 'M') {
        ++countM;
      } else if (s[i] == 'F') {
        ++countF;
      }
    }

    bool isLoop = countM == countF && countM + countF > 2;

    cout << (isLoop ? "LOOP\n" : "NO LOOP\n");
  }
}

