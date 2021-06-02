#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  char as[] = "ABCABCABCABC"; 
  char bs[] = "BABCBABCBABC"; 
  char gs[] = "CCAABBCCAABB";

  int a = 0, b = 0, g = 0, n;
  
  scanf("%d", &n);

  char s[n];

  scanf("%s", s);

  for (int i = 0; i < n; ++i) {
    int index = i % 12;
    
    if (as[index] == s[i]) {
      ++a;
    }

    if (bs[index] == s[i]) {
      ++b;
    }

    if (gs[index] == s[i]) {
      ++g;
    }
  }

  int ans = max({a, b, g});

  printf("%d\n", ans);
  
  if (a == ans) {
    printf("Adrian\n");
  }

  if (b == ans) {
    printf("Bruno\n");
  }

  if (g == ans) {
    printf("Goran\n");
  }
}

