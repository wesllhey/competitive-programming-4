#include <bits/stdc++.h>

using namespace std;

struct record {
  string time;
  string type;
  int location;

  bool operator < (const record& r) {
    return this->time < r.time;
  } 
};

struct comp {
  bool operator()(const record& r1, const record& r2) {
    return r1.time < r2.time;
  } 
};

vector<string> split(string& line) {
  vector<string> ans;

  size_t start = 0, end = line.find(" ");

  while (end != string::npos) {
    ans.push_back(line.substr(start, end - start));
    start = end + 1;
    
    end = line.find(" ", start);
  }
  
  ans.push_back(line.substr(start, end - start));

  return ans;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  
  cout << setprecision(2);
  cout << fixed;

  string line;
  int tests;
  
  cin >> tests;

  for (int test = 0; test < tests; ++test) {
    vector<int> toll(24);

    for (int i = 0; i < 24; ++i) {
      cin >> toll[i];
    }

    cin.ignore();
    
    map<string, vector<record>> records;

    while (getline(cin, line), !line.empty()) {
      vector<string> values = split(line);
      
      records[values[0]].push_back({values[1], values[2], stoi(values[3])});
    }
    
    if (test) cout << "\n";
    
    for (auto& p : records) {
      double cost = INT_MAX;
      
      sort(p.second.begin(), p.second.end());

      for (int i = 0; i < (int) p.second.size() - 1; ++i) {
        auto enter = p.second[i], exit = p.second[i + 1];
        
        if (enter.type == "enter" && exit.type == "exit") {
          const double value = (abs(exit.location - enter.location) * toll[stoi(enter.time.substr(6, 2))]) / 100.0;
          
          if (cost == INT_MAX) {
            cost = value;
          } else {
            cost += value;
          }

          ++cost;
        }
      }

      if (cost != INT_MAX) {
        cout << p.first << " $" << cost + 2<< "\n";
      }
    }
  }
}

