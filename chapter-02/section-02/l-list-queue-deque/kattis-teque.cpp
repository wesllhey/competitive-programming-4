#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  deque<int> first, second;
  string command;
  int tests, number;

  cin >> tests;

  while (tests--) {
    cin >> command >> number;

    if (command == "push_back") {
      if (second.size() > first.size() + 1) {
        first.push_back(second.front());
        second.pop_front();
      }  
  
      second.push_back(number);
    } else if (command == "push_front") {
      if (first.size() > second.size() + 1) {
        second.push_front(first.back());
        first.pop_back();
      }
      
      first.push_front(number);
    } else if (command == "push_middle") {
      if (first.size() > second.size() + 1) {
        second.push_front(first.back());
        first.pop_back();
      } else if (second.size() >= first.size() + 1) {
        first.push_back(second.front());
        second.pop_front();
      }
      
      second.push_front(number);
    } else {
      if (number >= (int) first.size() || first.empty()) {
        cout << second[number - first.size()] << "\n";
      } else {
        cout << first[number] << "\n";
      }
    }
  }
}

