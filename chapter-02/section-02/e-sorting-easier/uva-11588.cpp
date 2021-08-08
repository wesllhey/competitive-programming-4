#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  char c;
  int tests, rows, columns, important, nonImportant;

  scanf("%d", &tests);

  for (int test = 1; test <= tests; ++test) {
    scanf("%d %d %d %d", &rows, &columns, &important, &nonImportant);
    
    int count[26] = {0}, maxFrequency = 0, ans = 0, total = rows * columns;

    for (int i = 0; i < total; ++i) {
      scanf("%c", &c);

      if (c != '\n') {
        count[c - 'A']++;

        maxFrequency = max(maxFrequency, count[c - 'A']);
      } else { 
        --i;
      }
    }
    
    for (int i = 0; i < 26; ++i) {
      if (count[i] == maxFrequency) {
        ans += important * count[i];
      } else {
        ans += nonImportant * count[i];
      }
    }

    printf("Case %d: %d\n", test, ans);
  }
}

