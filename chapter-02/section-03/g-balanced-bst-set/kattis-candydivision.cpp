#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  
  ll n;

  cin >> n;
  
  set<ll> st;

  for (ll i = 1; i < sqrt(n) + 2; ++i) {
    if (n % i == 0) {
      st.insert(i);
      st.insert(n / i);
    }
  }

  for (auto& v : st) {
    cout << v - 1 << " ";
  }

  cout << "\n";
}

