#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  bool asc = false, desc = false;
  string name, previous;
  int n;
  
  cin >> n; 
  
  for (int i = 0; i < n; ++i) {
    cin >> name;

    if (i) {
      if (name.compare(previous) > 0) {
        asc= true;

        if (desc) break;
      } else {
        desc = true;

        if (asc) break;
      }
    }

    previous = name;
  }

  if (asc && !desc) {
    cout << "INCREASING\n";
  } else if (desc && !asc) {
    cout << "DECREASING\n";
  } else {
    cout << "NEITHER\n";
  }
}

