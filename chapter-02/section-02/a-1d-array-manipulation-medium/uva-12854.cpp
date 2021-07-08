#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int connector[5], point;

  while (scanf("%d %d %d %d %d", &connector[0], &connector[1], 
        &connector[2], &connector[3], &connector[4]) != EOF) {
    bool isCompatible = true;

    for (int i = 0; i < 5; ++i) {
      scanf("%d", &point);

      if (!connector[i] ^ point) {
        isCompatible = false;
      }
    }

    printf(isCompatible ? "Y\n" : "N\n");
  }
}

