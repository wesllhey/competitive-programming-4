#include <bits/stdc++.h>

using namespace std;

vector<string> split(string s) {
  if (s.empty()) return {};

  size_t start = 0;
  size_t end = s.find(',');
  
  vector<string> ans;
  while (end != string::npos) {
    ans.push_back(s.substr(start, end - start));
    start = end + 1;
    end = s.find(',', start);
  }

  ans.push_back(s.substr(start));

  return ans;
}

void solve(deque<string>& d, string& commands) {
  bool isReversed = false;

  for (int i = 0; i < (int) commands.size(); ++i) {
    if (commands[i] == 'R') {
      isReversed = !isReversed;
    } else {
      if (d.empty()) {
        cout << "error\n";

        return;
      } else if (isReversed) {
        d.pop_back();
      } else {
        d.pop_front();
      } 
    }
  }
  
  cout << "[";
  if (isReversed) {
    while (!d.empty()) {
      cout << d.back();

      d.pop_back();

      if (!d.empty()) {
        cout << ",";
      }
    }
  } else {
    while (!d.empty()) {
      cout << d.front();

      d.pop_front();

      if (!d.empty()) {
        cout << ",";
      }
    }
  }

  cout << "]\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  string commands, elements;
  int tests, length;

  cin >> tests;

  while (tests--) {
    deque<string> d;
    cin >> commands;
    cin >> length;
    cin >> elements;


    if (length) {
      auto arr = split(elements.substr(1, elements.size() - 2));
      
      for (string n : arr) {
        d.push_back(n);
      }
    }

    solve(d, commands);
  }
}

