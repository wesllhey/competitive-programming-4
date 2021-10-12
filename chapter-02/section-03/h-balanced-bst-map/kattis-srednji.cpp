#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  
  int n, b;

  cin >> n >> b;

  vector<int> arr(n);

  int index = -1;

  for (int i = 0; i < n; ++i) {
    cin >> arr[i];

    if (arr[i] == b) {
      index = i;
    }
  }

  unordered_map<int, int> mp;

  mp[0] = 1;
  
  int count = 0;
  for (int i = index + 1; i < n; ++i) {
    if (arr[i] > b) {
      ++count;
    } else {
      --count;
    }

    mp[count]++;
  }
  
  long long ans = mp[0];
  count = 0;
  for (int i = index - 1; i >= 0; --i) {
    if (arr[i] > b) {
      ++count;
    } else {
      --count;
    }
    
    ans += mp[-count];
  }

  cout << ans << "\n";
}

