#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int a, b, c;

  scanf("%d %d %d", &a, &b, &c);

  if (a < b) {
    swap(a, b);
  }

  if (a < c) {
    swap(a, c);
  }

  if (b < c) {
    swap(b, c);
  }

  int diff = min(a - b, b - c), ans;

  if (a - b == b - c) {
    ans = a + diff;
  } else if (a - b > b - c) {
    ans = a - diff;
  } else {
    ans = c + diff;
  }

  printf("%d\n", ans);
}

