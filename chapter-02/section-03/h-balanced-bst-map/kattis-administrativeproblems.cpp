#include <bits/stdc++.h>

using namespace std;

struct car {
  string name;
  int price;
  int pickupPrice;
  int costPerKilometer;
};

struct spyEvent {
  int time;
  char type;
  string car;
  int kilometers;
  int accidentLevel;
  bool valid;
  long long cost;

  spyEvent() {};

  spyEvent(int time, char type) {
    this->time = time;
    this->type = type;
    this->valid = true;
    this->cost = 0;
  }
};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  char eventType;
  string carName, spy;
  int tests, types, events, price, pickupPrice, costPerKilometer, time, kilometers, level;

  cin >> tests;

  while (tests--) {
    unordered_map<string, car> cars;
    map<string, spyEvent> eventsBySpy;

    cin >> types >> events;

    for (int i = 0; i < types; ++i) {
      cin >> carName >> price >> pickupPrice >> costPerKilometer;
      
      car c = {carName, price, pickupPrice, costPerKilometer};

      cars[carName] = c;
    }

    for (int i = 0; i < events; ++i) {
      cin >> time >> spy >> eventType;
      
      if (eventsBySpy.find(spy) == eventsBySpy.end()) {
        spyEvent e = {time, eventType};
        eventsBySpy[spy] = e;
      }

      spyEvent e = eventsBySpy[spy];
      
      if (eventType == 'p') {
        cin >> carName;
        
        if (!e.car.empty()) {
          e.valid = false;
        } else {
          e.car = carName;
          e.cost += cars[carName].pickupPrice;
        }
      } else if (eventType == 'r') {
        cin >> kilometers;
        
        if (e.car.empty()) {
          e.valid = false;
        } else {
          e.cost += cars[e.car].costPerKilometer * kilometers;
        }

        e.car = "";
      } else {
        cin >> level;

        if (e.car.empty()) {
          e.valid = false;
        } else {
          e.cost += (cars[e.car].price * level + 99) / 100;
        }
      }

      eventsBySpy[spy] = e;
    }

    for (auto& p : eventsBySpy) {
      cout << p.first << " ";

      spyEvent e = p.second;

      if (e.valid && e.car.empty()) {
        cout << e.cost << "\n";
      } else {
        cout << "INCONSISTENT\n";
      }
    }
  }
}

