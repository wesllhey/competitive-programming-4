#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int cups;
  string s1, s2;

  cin >> cups;
  
  vector<pair<int, string>> ans(cups);

  for (int i = 0; i < cups; ++i) {
    string color;
    int radius;

    cin >> s1 >> s2;
    
    if (isdigit(s1[0])) {
      color = s2;
      radius = stoi(s1) / 2; 
    } else {
      color = s1;
      radius = stoi(s2);
    }

    ans[i] = {radius, color};
  }

  sort(ans.begin(), ans.end());

  for (int i = 0; i < cups; ++i) {
    cout << ans[i].second << "\n";
  }
}

