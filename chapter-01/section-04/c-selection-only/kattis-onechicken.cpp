#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int n, m;

  scanf("%d %d", &n, &m);

  int ans = m - n;

  if (ans >= 0) {
    if (ans == 1) {
      printf("Dr. Chaz will have 1 piece of chicken left over!");
    } else {
      printf("Dr. Chaz will have %d pieces of chicken left over!", ans);
    }
  } else {
    if (ans == -1) {
      printf("Dr. Chaz needs 1 more piece of chicken!");
    } else {
      printf("Dr. Chaz needs %d more pieces of chicken!", -ans);
    }
  }
}

