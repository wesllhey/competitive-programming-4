#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int pairs, sock, ans = 0;

  scanf("%d", &pairs);

  deque<int> s;

  for (int i = 0; i < 2 * pairs; ++i) {
    scanf("%d", &sock);
    
    if (s.empty() || s.front() != sock) {
      s.push_front(sock);
    } else {
      s.pop_front();
      
      ans += 2;
    }
  }

  if (s.empty()) {
    printf("%d", ans);
  } else {
    printf("impossible");
  }
}

