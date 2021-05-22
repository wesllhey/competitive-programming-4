#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int t, r, e, c;

  scanf("%d", &t);

  while (t--) {
    scanf("%d %d %d", &r, &e, &c);

    if (e - c > r) {
      printf("advertise\n");
    } else if (e - c < r) {
      printf("do not advertise\n");
    } else {
      printf("does not matter\n");
    }
  }
}

