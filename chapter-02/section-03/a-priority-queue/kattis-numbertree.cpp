#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int height;
  string path;

  cin >> height;

  cin >> path;

  ll root = pow(height + 1, 2) - 1;

  int index = 1;

  for (char& c : path) {
    if (c == 'L') {
      index *= 2;
    } else {
      index = index * 2 + 1;
    }
  }
  
  cout << (root - (index - 1));
}

