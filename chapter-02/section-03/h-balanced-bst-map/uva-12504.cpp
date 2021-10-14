#include <bits/stdc++.h>

using namespace std;

map<string, string> getDict(string& s) {
  map<string, string> ans;
  
  if (s.size() > 2) {
    size_t end = 0;

    while (true) {
      size_t start = end + 1;
      end = s.find(":", start); 

      string key = s.substr(start, end - start);
      start = end + 1;

      end = s.find(",", start);

      if (end == string::npos) {
        const string value = s.substr(start, s.size() - start - 1);
        ans[key] = value;
        break;
      }

      const string value = s.substr(start, end - start);
      ans[key] = s.substr(start, end - start);
    }
  }

  return ans;
}

void print(vector<string> arr, char type) {
  for (int i = 0; i < (int) arr.size(); ++i) {
    if (i) {
      cout << ",";
    } else {
      cout << type;
    }

    cout << arr[i];

    if (i + 1 == (int) arr.size()) {
      cout << "\n";
    }
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  
  string dict1, dict2;
  int tests;

  cin >> tests;

  while (tests--) {
    cin >> dict1 >> dict2;
    
    vector<string> added, removed, changed;

    map<string, string> mp1 = getDict(dict1);
    map<string, string> mp2 = getDict(dict2);
    
    for (auto& p : mp1) {
      if (mp2.find(p.first) == mp2.end()) {
        removed.push_back(p.first);
      } else if (p.second != mp2[p.first]) {
        changed.push_back(p.first);
      }
    }

    for (auto& p : mp2) {
      if (mp1.find(p.first) == mp1.end()) {
        added.push_back(p.first);
      }
    }

    if (added.empty() && removed.empty() && changed.empty()) {
      cout << "No changes\n"; 
    } else {
      print(added, '+');
      print(removed, '-');
      print(changed, '*');
    }
  
    cout << "\n";
  }
}

