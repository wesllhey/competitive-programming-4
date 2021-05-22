#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int a, b, c;

  while (scanf("%d %d %d", &a, &b, &c) != EOF) {
    if (a != b && b == c) {
      printf("A\n");
    } else if (b != a && a == c) {
      printf("B\n");
    } else if (c != a && a == b) {
      printf("C\n");
    } else {
      printf("*\n");
    }
  }
}

