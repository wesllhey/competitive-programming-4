#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int n;

  scanf("%d", &n);
  
  char s[6];

  bool makesSense = true;

  for (int i = 1; i <= n; ++i) {
    scanf("%s", s);  
    
    if (strcmp(s, "mumble") != 0 && atoi(s) != i) {
      makesSense = false;
    }
  }

  if (makesSense) {
    printf("makes sense\n");
  } else {
    printf("something is fishy\n");
  }
}

