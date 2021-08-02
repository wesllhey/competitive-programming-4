#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int numbers[5];

  for (int i = 0; i < 5; ++i) {
    scanf("%d", &numbers[i]);
  }

  for (int i = 0; i < 4; ++i) {
    bool isSorted = true;

    for (int j = 0; j < 5 - i - 1; ++j) {
      if (numbers[j] > numbers[j + 1]) {
        isSorted = false;
        swap(numbers[j], numbers[j + 1]);

        for (int index = 0; index < 5; ++index) {
          if (index) {
            printf(" ");
          }

          printf("%d", numbers[index]);
        }

        printf("\n");
      }
    }

    if (isSorted) {
      break;
    }
  }
}

