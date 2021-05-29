#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int n, solved = 0, score = 0, attempts[26] = {0};
  char c, w[5];

  while (scanf("%d", &n), n != -1) {
    scanf(" %c %s", &c, w);
  
    int q = c - 'A';
   
    if (strcmp(w, "right") == 0) {
      score += n + attempts[q] * 20;
      ++solved;
    } else {
      attempts[q]++;
    }
  }

  printf("%d %d\n", solved, score);
}

