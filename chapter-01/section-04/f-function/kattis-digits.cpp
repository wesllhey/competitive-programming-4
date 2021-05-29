#include <bits/stdc++.h>

using namespace std;

int getSmallest(int i, string number) {
  string size = to_string(number.size());

  if (size == number) {
    return i;
  }

  return getSmallest(i + 1, size);
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  string s;

  while (cin >> s, s != "END") {
    int ans = getSmallest(1, s);

    cout << ans << "\n";
  }
}

