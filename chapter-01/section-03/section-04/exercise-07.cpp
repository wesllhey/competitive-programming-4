#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int N = 10, p[N];

  for (int i = 0; i < N; ++i) {
    p[i] = i;
  }

  do {
    for (int i = 0; i < N; ++i) {
      printf("%c", 'A' + p[i]);
    }

    printf("\n");
  } while (next_permutation(p, p + N));
}

