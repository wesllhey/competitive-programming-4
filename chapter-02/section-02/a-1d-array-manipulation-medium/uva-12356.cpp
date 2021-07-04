#include <bits/stdc++.h>

using namespace std;

struct soldier {
  int left = 0;
  int right = 0;
};

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int soldiersNumber, lossNumber, left, right;

  while (scanf("%d %d", &soldiersNumber, &lossNumber), 
      soldiersNumber || lossNumber) {
    
    soldier soldiers[soldiersNumber + 1];

    for (int i = 1; i < soldiersNumber; ++i) {
      soldiers[i].left = i - 1;
      soldiers[i].right = i + 1;
    }

    for (int loss = 0; loss < lossNumber; ++loss) {
      scanf("%d %d", &left, &right);
      
      soldier leftKilled = soldiers[left];
      soldier rightKilled = soldiers[right];
      int leftSoldier = leftKilled.left;
      int rightSoldier = rightKilled.right;

      if (leftSoldier) {
        printf("%d ", leftSoldier);
        soldiers[leftSoldier].right = rightSoldier;
      } else {
        printf("* ");
      }

      if (rightSoldier) {
        printf("%d\n", rightSoldier);
        soldiers[rightSoldier].left = leftSoldier;
      } else {
        printf("*\n");
      }

    }
    printf("-\n");
  }
}

