#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int n, d;

  scanf("%d", &n);

  int arr[n];
  arr[0] = 1;

  for (int i = 2; i <= n; ++i) {
    scanf("%d", &d);

    arr[d + 1] = i;
  }

  for (int i = 0; i < n; ++i) {
    printf("%d ", arr[i]);
  }
}

