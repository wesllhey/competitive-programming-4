#include <bits/stdc++.h>

using namespace std;

struct medicine {
  int order;
  string name;
  int frequency;
  long long time;
};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  
  string name;
  int tests, medicinesNumber, quantity, frequency;

  const auto comp = [](const medicine& m1, const medicine& m2) {
    if (m1.time > m2.time) {
      return true;
    }

    if (m1.time == m2.time) return m1.order > m2.order;

    return false;
  };

  cin >> tests;

  while (tests--) {
    int order = 0;

    priority_queue<medicine, vector<medicine>, decltype(comp)> pq(comp);
    cin >> medicinesNumber >> quantity;
    
    for (int i = 0; i < medicinesNumber; ++i) {
      cin >> name >> frequency;

      pq.push({order++, name, frequency, frequency});
    }

    for (int i = 0; i < quantity; ++i) {
      const medicine m = pq.top();
      pq.pop();

      cout << m.time << " " << m.name << "\n";

      pq.push({m.order, m.name, m.frequency, m.time + m.frequency});
    }
  }
}

