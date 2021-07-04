#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();

  int carsNumber, car, position;

  while (scanf("%d", &carsNumber), carsNumber) {
    bool possible = true;
    ll pole[carsNumber + 1] = {0};


    for (int i = 1; i <= carsNumber; ++i) {
      scanf("%d %d", &car, &position);
      ll newPosition = i + position;
      
      if (newPosition <= 0 || newPosition > carsNumber || pole[newPosition]) {
        possible = false;
      } else if (possible) {
        pole[newPosition] = car;
      }
    }
    
    if (possible) {
      for (int i = 1; i <= carsNumber; ++i) {
        printf("%lld", pole[i]);

        if (i < carsNumber) {
          printf(" ");
        }
      }
    } else {
      printf("-1");
    }

    printf("\n");
  }
}

