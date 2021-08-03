#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int ants;

  while (scanf("%d", &ants), ants) {
    
    int length, width, height, maxHeight = 0, maxVolume = 0;

    for (int i = 0; i < ants; ++i) {
      scanf("%d %d %d", &length, &width, &height);
      
      const int volume = length * width * height;

      if (height > maxHeight || (height == maxHeight && volume > maxVolume)) {
        maxHeight = height;
        maxVolume = volume;
      }
    }

    printf("%d\n", maxVolume);
  }
}

