#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int n, arr[4] = {0};

  char s[4];
  
  scanf("%d", &n);

  while (n--) {
    scanf("%s", s);

    for (int i = 0; i < 4; ++i) {
      char c = s[i];

      if (c == '0') {
        arr[i]++;
      }
    }
  }
  
  int totalTB = arr[0] + arr[1];
  int totalLR = arr[2] + arr[3];

  int total = min(totalTB / 2, totalLR / 2);

  printf("%d %d %d", total, 
      totalTB - total * 2, 
      totalLR - total * 2); 
}

