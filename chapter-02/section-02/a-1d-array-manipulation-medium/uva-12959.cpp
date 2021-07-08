#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int players, turns, point;

  while (scanf("%d %d", &players, &turns) != EOF) {
    int winner = 0, points[players] = {0}; 

    for (int i = 0; i < turns; ++i) {
      for (int j = 0; j < players; ++j) {
        scanf("%d", &point);
        
        points[j] += point;

        if (points[j] >= points[winner]) {
          winner = j;
        } 
      }
    }
    
    printf("%d\n", winner + 1);
  }
}

