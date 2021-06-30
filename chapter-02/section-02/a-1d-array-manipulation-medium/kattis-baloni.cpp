#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int balloonsNumber, shoots = 0, balloon;

  scanf("%d", &balloonsNumber);
  
  int count[balloonsNumber + 1] = {0};
  
  for (int i = 0; i < balloonsNumber; ++i) {
    scanf("%d", &balloon);
    
    if (count[balloon]) {
      count[balloon]--;
    }

    count[balloon - 1]++;
  }
  
  for (int arrows : count) {
    shoots += arrows;
  }

  printf("%d\n", shoots);
}

