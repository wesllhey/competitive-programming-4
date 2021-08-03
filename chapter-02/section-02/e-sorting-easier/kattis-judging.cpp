#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int subs;

  cin >> subs;
  
  string result;

  unordered_map<string, int> dom, kattis;

  for (int i = 0; i < subs; ++i) {
    cin >> result;

    dom[result]++;
  }
  
  for (int i = 0; i < subs; ++i) {
    cin >> result;

    kattis[result]++;
  }
  
  int ans = 0;

  for (auto& p : kattis) {
    if (dom.find(p.first) != dom.end()) {
      ans += min(p.second, dom.at(p.first));
    }
  }

  cout << ans;
}

