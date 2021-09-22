#include <bits/stdc++.h>

using namespace std;

struct query {
  int num;
  int period;
  int time;
};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  
  const auto cmp = [](const query& q1, const query& q2) {
    if (q1.time > q2.time) return true;

    if (q1.time == q2.time) {
      return q1.num > q2.num;
    }

    return false;
  };

  priority_queue<query, vector<query>, decltype(cmp)> pq(cmp);
  string command;
  int size, num, period;

  while (cin >> command, command != "#") {
    cin >> num >> period;

    pq.push({num, period, period});
  }
  
  cin >> size;
  
  while (size--) {
    const query q = pq.top();
    pq.pop();
    
    cout << q.num << "\n";

    pq.push({q.num, q.period, q.time + q.period});
  }
}

