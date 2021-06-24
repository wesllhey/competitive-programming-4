#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  string howl, example = "AWAWH";

  cin >> howl;

  cout << example;

  for (int i = 0; i <= abs((int) example.size() - (int) howl.size()); ++i) {
    cout << "O";
  }
}

