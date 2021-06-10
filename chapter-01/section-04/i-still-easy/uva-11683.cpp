#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int height, width, block;

  while (scanf("%d", &height), height) {
    scanf("%d", &width);
    int ans = 0, previousBlock;

    for (int i = 0; i < width; ++i) {
      scanf("%d", &block);

      if (i && block > previousBlock) {
        ans += block - previousBlock;
      }

      previousBlock = block;
    }

    ans += height - block;
  
    printf("%d\n", ans);
  }
}

