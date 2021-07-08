#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int tests, membersNumber, age, captainAge;

  scanf("%d", &tests);

  for (int test = 1; test <= tests; ++test) {
    scanf("%d", &membersNumber);
    
    for (int i = 0; i < membersNumber; ++i) {
      scanf("%d", &age);

      if (i == membersNumber / 2) {
        captainAge = age;
      }
    }

    printf("Case %d: %d\n", test, captainAge);
  }
}

