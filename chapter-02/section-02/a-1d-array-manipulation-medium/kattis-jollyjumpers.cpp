#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int size;

  while (scanf("%d", &size) != EOF) {
    int currentNumber, lastNumber;
    bool differences[size] = {false}, isJollyJumper = true;
    
    for (int i = 0; i < size; ++i) {
      scanf("%d", &currentNumber);

      if (i) {
        const int diff = abs(currentNumber - lastNumber);

        if (diff >= size) {
          isJollyJumper = false;
        } else {
          differences[diff] = true;
        }
      }

      lastNumber = currentNumber;
    }

    for (int i = 1; i < size && isJollyJumper; ++i) {
      if (!differences[i]) {
        isJollyJumper = false;
      }
    }

    printf(isJollyJumper ? "Jolly\n" : "Not jolly\n");
  }
}

