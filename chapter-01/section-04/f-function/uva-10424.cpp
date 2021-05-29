#include <bits/stdc++.h>

using namespace std;

int getValue(char s[]) {
  int value = 0;

  for (int i = 0; s[i]; ++i) {
    char c = tolower(s[i]);

    if ('a' <= c && c <= 'z') {
      value += c - 'a' + 1;
    }
  }

  if (value % 9 == 0) {
    return 9;
  }

  return value % 9;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  char s[26];

  while (fgets(s, sizeof(s), stdin) != nullptr) {
    int n1 = getValue(s);
    
    fgets(s, sizeof(s), stdin);

    int n2 = getValue(s);

    int high = max(n1, n2);
    int low = min(n1, n2);

    printf("%.2lf %%\n", (double) low / high * 100);
  }
}

