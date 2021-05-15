#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int n, x;

  scanf("%d", &n);

  set<int> st;

  for (int i = 0; i < n; ++i) {
    scanf("%d", &x);

    st.insert(x);
  }

  for (auto it: st) {
    cout << it << " ";
  }
}

