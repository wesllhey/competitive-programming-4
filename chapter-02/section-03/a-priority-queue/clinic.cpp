#include <bits/stdc++.h>

using namespace std;

const int MAX_W = 10000000;

struct patient {
  string name;
  int time;
  long long priority;
};

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  string name;
  long long constant;
  int queryNumber, queryType, time, priority;

  cin >> queryNumber >> constant;

  auto comp = [](const auto& p1, const auto& p2) {
    if (p1.priority == p2.priority) {
      return p1.name > p2.name;
    }

    return p1.priority < p2.priority;
  };

  unordered_set<string> gonePatients;
  priority_queue<patient, vector<patient>, decltype(comp)> pq(comp);

  while (queryNumber--) {
    cin >> queryType;

    if (queryType == 1) {
      cin >> time >> name >> priority;

      pq.push({name, time, priority + constant * (MAX_W - time)});
    } else if (queryType == 2) {
      cin >> time;

      while (!pq.empty() && 
          gonePatients.find(pq.top().name) != gonePatients.end()) {
        pq.pop();
      }

      if (pq.empty() || pq.top().time > time) {
        cout << "doctor takes a break\n";
      } else {
        cout << pq.top().name << "\n";
        pq.pop();
      }
    } else {
      cin >> time >> name;
      gonePatients.insert(name);
    }
  }
}

