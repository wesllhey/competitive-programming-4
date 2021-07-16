#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int numberSwathers, numberStages, amountTime;

  scanf("%d %d", &numberSwathers, &numberStages);

  vector<vector<int>> time(numberSwathers + 1, vector<int>(numberStages + 1, 0));
 
  for (int i = 1; i <= numberSwathers; ++i) {
    for (int j = 1; j <= numberStages; ++j) {
      scanf("%d", &amountTime);
      time[i][j] = amountTime + max(time[i][j - 1], time[i - 1][j]);
    } 
  }

  for (int i = 1; i <= numberSwathers; ++i) {
    printf("%d ", time[i][numberStages]);
  }
}

