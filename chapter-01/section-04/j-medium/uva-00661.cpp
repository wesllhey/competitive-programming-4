#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int numberDevices, numberOperations, capacity, test = 0, device;

  while (cin >> numberDevices >> numberOperations >> capacity,
      numberDevices || numberOperations || capacity) {
    
    bool devicesOperation[numberDevices] = {false};
    int devicesConsumption[numberDevices];

    long currentConsumption = 0, maxConsumption = 0;

    for (int i = 0; i < numberDevices; ++i) {
      cin >> devicesConsumption[i];
    }

    for (int i = 0; i < numberOperations; ++i) {
      cin >> device;
      --device;

      if (devicesOperation[device]) {
        devicesOperation[device] = false;
        currentConsumption -= devicesConsumption[device];
      } else {
        currentConsumption += devicesConsumption[device];
        devicesOperation[device] = true;

        maxConsumption = max(maxConsumption, currentConsumption);
      }
    }

    cout << "Sequence " << ++test << "\n";

    if (maxConsumption > capacity) {
      cout << "Fuse was blown.\n"; 
    } else {
      cout << "Fuse was not blown.\n";
      cout << "Maximal power consumption was " << maxConsumption << " amperes.\n";
    }

    cout << "\n";
  }
}

