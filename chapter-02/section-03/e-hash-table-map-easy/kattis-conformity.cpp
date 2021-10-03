#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  
  int students, maxPopularity = 0, ans = 0;

  cin >> students;
  
  unordered_map<string, int> mp;
  vector<string> courses(5);
  
  cin.ignore();
  for (int i = 0; i < students; ++i) {
    for (int j = 0; j < 5; ++j) {
      cin >> courses[j];
    }

    sort(courses.begin(), courses.end());
    
    string combination;

    for (int j = 0; j < 5; ++j) {
      combination += courses[j];
    }

    mp[combination]++;
    
    maxPopularity = max(maxPopularity, mp[combination]);
  }

  for (auto& p : mp) {
    if (p.second == maxPopularity) {
      ans += p.second;
    }
  }

  cout << ans << "\n";
}

