#include <bits/stdc++.h>

using namespace std;

char s[110][110];

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  
  int n;
    
  scanf("%d", &n);

  for (int i = 0; i < 5; ++i) {
    scanf("%s", s[i]);
  }

  for (int i = 0; i < n * 4; i += 4) {
    if (s[0][i] == '.') {
      printf("1");
    } else if (s[3][i] == '*') {
      printf("2");
    } else {
      printf("3");
    }
  }

  printf("\n");
}

