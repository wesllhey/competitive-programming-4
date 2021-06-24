#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int totalWidth, piaces, width, length;
  long long area = 0;

  cin >> totalWidth;
  cin >> piaces;

  while (piaces--) {
    cin >> width >> length;
    area += width * length;
  }
  
  cout << area / totalWidth;
}

