#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int g, s, c;

  scanf("%d %d %d", &g, &s, &c);

  int bp = 3 * g + 2 * s + c;
  
  string v, t;

  if (bp >= 8) {
    v = "Province";
  } else if (bp >= 5) {
    v = "Duchy";
  } else if (bp >= 2) {
    v = "Estate";
  }

  if (bp >= 6) {
    t = "Gold";
  } else if (bp >= 3) {
    t = "Silver";
  } else {
    t = "Copper";
  }

  if (!v.empty()) {
    cout << v << " or ";
  }

  cout << t;
}

