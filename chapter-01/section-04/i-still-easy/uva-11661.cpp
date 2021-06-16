#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int highwayLength;

  while (scanf("%d", &highwayLength), highwayLength) {
    char highway[highwayLength];

    scanf("%s", highway);
    
    int lastDrugstore = -1, lastRestaurant = -1, ans = INT_MAX;

    for (int i = 0; i < highwayLength; ++i) {
      char c = highway[i];
      
      if (c == '.') continue;

      if (c == 'Z') {
        ans = 0;
        break;
      }

      if (c == 'D') lastDrugstore = i;
      
      if (c == 'R') lastRestaurant = i;
    
      if (lastDrugstore != -1 && lastRestaurant != -1) {
        ans = min(ans, abs(lastDrugstore - lastRestaurant));
      }
    }

    printf("%d\n", ans);
  }
}

