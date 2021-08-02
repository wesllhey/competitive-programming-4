#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int tests, k;

  scanf("%d", &tests);

  while (tests--) {
    scanf("%d", &k);

    int students[20], ans = 0;

    for (int i = 0; i < 20; ++i) {
      scanf("%d", &students[i]);
    }

    for (int i = 1; i < 20; ++i) {
      int key = students[i];
      int j = i - 1;

      while (j >= 0 && students[j] > key) {
        students[j + 1] = students[j];
        ++ans;
        --j;
      }
      students[j + 1] = key;
    }

    printf("%d %d\n", k, ans);
  }
}

