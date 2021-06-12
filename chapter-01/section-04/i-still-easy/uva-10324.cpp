#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  char s[1000005];
  int n, test = 0, a, b;

  while (scanf("%s %d", s, &n) != EOF) {
    printf("Case %d:\n", ++test);

    while (n--) {
      scanf("%d %d", &a, &b);
      
      bool isEquals = true;

      for (int i = min(a, b) + 1; i <= max(a, b); ++i) {
        if (s[i] != s[i - 1]) {
          isEquals = false;
          break;
        }  
      }

      printf(isEquals ? "Yes\n" : "No\n");
    }
  }
}

