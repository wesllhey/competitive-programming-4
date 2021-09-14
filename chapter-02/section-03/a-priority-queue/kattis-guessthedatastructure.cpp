#include <bits/stdc++.h>

using namespace std;

bool canBeOp(int x, int y, bool isOp) {
  return isOp && x == y;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int type, value, operations;

  while (cin >> operations) {
    bool isQueue = true, isStack = true, isPq = true, impossible = false;
    stack<int> s;
    queue<int> q;
    priority_queue<int> p;
    
    for (int i = 0; i < operations; ++i) {
      cin >> type >> value;

      if (impossible) continue;

      if (type == 1) {
        s.push(value);
        q.push(value);
        p.push(value);
      } else {
        if (p.empty()) {
          impossible = true;
          continue;
        }

        const int qv = q.front(), sv = s.top(), pv = p.top();
        q.pop(), s.pop(), p.pop();
      
        isQueue = canBeOp(value, qv, isQueue);
        isStack = canBeOp(value, sv, isStack);
        isPq = canBeOp(value, pv, isPq);
      }
    }
    if (impossible || (!isQueue && !isStack && !isPq)) {
      cout << "impossible\n";
    } else if (isQueue && !isStack && !isPq) {
      cout << "queue\n";
    } else if (isStack && !isQueue && !isPq) {
      cout << "stack\n";
    } else if (isPq && !isQueue && !isStack) {
      cout << "priority queue\n";
    } else {
      cout << "not sure\n";
    }
  }
}

