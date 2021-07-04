#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  char beds[500005];

  while (scanf("%s", beds) != EOF) {
    int ans = 0, currentEmpty = 0, firstPosition = -1;

    for (int i = 0; beds[i]; ++i) {
      if (beds[i] == 'X') {
        ans = max(currentEmpty, ans);
        currentEmpty = 0;

        if (firstPosition == -1) {
          firstPosition = i;
        }
      } else {
        ++currentEmpty;
      }
    }

    ans = max({(ans - 1) / 2, currentEmpty - 1, firstPosition - 1});

    printf("%d\n", ans); 
  }
}

