#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  
  long long sum = 0;
  int n, t;

  cin >> n >> t;
  
  int arr[n];

  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }

  switch (t) {
    case 1:
      cout << 7;
      break;
    case 2:
      if (arr[0] > arr[1]) cout << "Bigger";
      else if (arr[0] == arr[1]) cout << "Equal";
      else cout << "Smaller";
      break;
    case 3:
      sort(arr, arr + 3);
      cout << arr[1];
      break;
    case 4:
      for (int i = 0; i < n; ++i) sum += arr[i];
      cout << sum;
      break;
    case 5:
      for (int i = 0; i < n; ++i) {
        if (arr[i] % 2 == 0) sum += arr[i];
      }
      cout << sum;
      break;
    case 6:
      for (int i = 0; i < n; ++i) cout << char((arr[i] % 26) + 'a');
      break;
    case 7:
      vector<bool> visited(n, 0);
      int index = 0;

      while (true) {
        if (index < 0 || index >= n) {
          cout << "Out";
          return 0;
        }

        if (visited[index]) {
          cout << "Cyclic";
          return 0;
        }
        
        if (index == n - 1) {
          cout << "Done";
          break;
        }

        visited[index] = true;

        index = arr[index];
      }
      break;
  }
}
