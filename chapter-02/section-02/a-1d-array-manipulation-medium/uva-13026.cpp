#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int tests, numbers;

  scanf("%d", &tests);

  for (int test = 1; test <= tests; ++test) {
    scanf("%d", &numbers);
    
    char phones[numbers][11];


    for (int i = 0; i < numbers; ++i) {
      scanf("%s", phones[i]);
    }
    
    char mommyNumber[11];

    scanf("%s", mommyNumber);

    printf("Case %d:\n", test);

    for (int i = 0; i < numbers; ++i) {
      int mistakes = 1;

      for (int j = 0; phones[i][j] && mistakes >= 0; ++j) {
        if (phones[i][j] != mommyNumber[j]) {
          --mistakes;
        }
      }
      
      if (mistakes >= 0) {
        printf("%s\n", phones[i]);
      }
    }
  }
}

