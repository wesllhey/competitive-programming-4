#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  
  string country;
  int trips, queries, year, time;
  
  cin >> trips;

  unordered_set<string> visited;
  unordered_map<string, vector<int>> mp;

  for (int i = 0; i < trips; ++i) {
    cin >> country >> year;

    mp[country].push_back(year);
  }
  
  cin >> queries;

  for (int i = 0; i < queries; ++i) {
    cin >> country >> time;
    time--;
    
    int ans;

    if (visited.find(country) != visited.end()) {
      ans = mp[country][time]; 
    } else {
      visited.insert(country);
      vector<int> years = mp[country];

      sort(years.begin(), years.end());

      mp[country] = years;

      ans = years[time];
    }

    cout << ans << "\n";
  }
}

