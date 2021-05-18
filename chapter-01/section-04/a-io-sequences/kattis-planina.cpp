#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int N;

  scanf("%d", &N);

  long ans = (long) pow(2, N) + 1;

  printf("%ld", ans * ans);
}

