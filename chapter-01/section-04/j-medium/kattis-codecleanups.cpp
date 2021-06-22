#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int pushes, day, cleanup = 1;

  cin >> pushes;

  vector<int> days;

  while (pushes--) {
    cin >> day;

    int dirtiness = 0;

    for  (int old : days) {
      dirtiness += day - old;  
    }

    if (dirtiness >= 20) {
      ++cleanup;

      days.clear();
    }

    days.push_back(day);
  }

  cout << cleanup;
}

