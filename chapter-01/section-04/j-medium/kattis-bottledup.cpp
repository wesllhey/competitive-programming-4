#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int volume, largeBottleVolume, smallBottleVolume;

  cin >> volume >> largeBottleVolume >> smallBottleVolume;

  for (int i = volume / largeBottleVolume; i >= 0; --i) {
    const int remaining = volume - i * largeBottleVolume;

    if (remaining % smallBottleVolume == 0) {
      cout << i << " " << remaining / smallBottleVolume;

      return 0;
    } 
  }
  
  cout << "Impossible";
}

