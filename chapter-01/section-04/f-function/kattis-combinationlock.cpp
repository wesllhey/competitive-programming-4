#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int s, a, b, c;

  while (scanf("%d %d %d %d", &s, &a, &b, &c), s || a || b || c) {
    printf("%d\n", (120 + (s - a + 40) % 40 + (b - a + 40) % 40 + (b - c + 40) % 40) * 9);
    
  }
}

