#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();

  string call;
  int children, calls, undo;
  
  cin >> children >> calls;

  stack<int> s;
  s.push(0);
  

  for (int i = 0; i < calls; ++i) {
    cin >> call;
    if (call[0] == 'u') {
      cin >> undo;
      
      for (int u = 0; u < undo; ++u) {
        s.pop();
      } 
    } else {
      const int nextPosition = (s.top() + stoi(call)) % children;
      
      if (nextPosition >= 0) {
        s.push(nextPosition);       
      } else {
       s.push(children + nextPosition);
      }
    }
  }

  cout << s.top();
}

