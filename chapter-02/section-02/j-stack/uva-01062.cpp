#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int test = 0;
  string container;

  while (cin >> container, container != "end") {
    vector<stack<char>> stacks(26);
    int size = 0;

    for (char& id : container) {
      int index = -1;
      bool placedContainer = false;
      
      for (int i = 0; i < size; ++i) {
        if (stacks[i].top() >= id) {
          if (stacks[i].top() == id) {
            placedContainer = true;
            break;
          } else if (index == -1) {
            index = i;
          }
        }
      }

      if (!placedContainer) {
        if (index == -1) {
          stacks[size++].push(id);
        } else {
          stacks[index].push(id);
        }
      }
    }
    
    cout << "Case " << ++test << ": " << size << "\n"; 
  }
}

