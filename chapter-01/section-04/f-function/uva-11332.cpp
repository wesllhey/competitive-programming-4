#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int n;

  while (scanf("%d", &n), n) {
    printf("%d\n", n % 9 == 0 ? 9 : n % 9); 
  }
}

