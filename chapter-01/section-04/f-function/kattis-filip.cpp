#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  char a[4], b[4];

  scanf("%s %s", a, b);

  reverse(a, a + 3);
  reverse(b, b + 3);

  int n1 = atoi(a), n2 = atoi(b);

  printf("%d\n", n1 > n2 ? n1 : n2);
}

