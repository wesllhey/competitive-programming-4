#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int size, card;

  scanf("%d", &size);

  stack<int> s;

  while (size--) {
    scanf("%d", &card);

    if (s.empty() || (s.top() + card) & 1) {
      s.push(card);
    } else {
      s.pop();
    }
  }

  printf("%ld", s.size());
}

