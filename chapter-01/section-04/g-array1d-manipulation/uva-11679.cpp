#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int b, n, d, c, v;

  while (scanf("%d %d", &b, &n), n || b) {
    int arr[b];
    bool possible = true;

    for (int i = 0; i < b; ++i) {
      scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; ++i) {
      scanf("%d %d %d", &d, &c, &v);
      
      arr[d - 1] -= v, arr[c - 1] += v;
    }

    for (int i = 0; i < b; ++i) {
      if (arr[i] < 0) {
        possible = false;
        break;
      }
    }

    if (possible) {
      printf("S\n");
    } else {
      printf("N\n");
    }
  }
}

