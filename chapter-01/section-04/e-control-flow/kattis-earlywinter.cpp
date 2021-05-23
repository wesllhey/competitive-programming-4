#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int n, d, k, c = 0;

  bool isConsecutive = true, isNeverSnowed = true;

  scanf("%d %d", &n, &d);

  for (int i = 0; i < n; ++i) {
    scanf("%d", &k);
    
    if (isConsecutive && k > d) {
      ++c;
    } else {
      isConsecutive = false;
    }

    if (k <= d) {
      isNeverSnowed = false;
    }

  }

  if (isNeverSnowed) {
    printf("It had never snowed this early!\n");
  } else {
    printf("It hadn't snowed this early in %d years!\n", c);
  }
}

