#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int gp, position, pilots, systems, scoreSize;

  while (scanf("%d %d", &gp, &pilots), gp || pilots) {
    int races[gp][pilots + 1];

    for (int i = 0; i < gp; ++i) {
      for (int pilot = 1; pilot <= pilots; ++pilot) {
        scanf("%d", &position);

        races[i][position] = pilot;
      }
    }

    scanf("%d", &systems);
    
    for (int i = 0; i < systems; ++i) {
      scanf("%d", &scoreSize);
      int scores[scoreSize];

      for (int j = 0; j < scoreSize; ++j) {
        scanf("%d", &scores[j]);
      }

      int pilotScores[pilots + 1] = {0}, maxScore = 0;

      for (int race = 0; race < gp; ++race) {
        for (int j = 0; j < scoreSize; ++j) {
          const int pilot = races[race][j + 1];

          pilotScores[pilot] += scores[j];

          maxScore = max(maxScore, pilotScores[pilot]);
        }
      }
      
      vector<int> winners;
      for (int pilot = 1; pilot <= pilots; ++pilot) {
        if (pilotScores[pilot] == maxScore) {
          winners.push_back(pilot);
        }
      }

      for (int index = 0; index < (int) winners.size(); ++index) {
        if (index) {
          printf(" ");
        }

        printf("%d", winners[index]);
      }

      printf("\n");
    }
  }
}

