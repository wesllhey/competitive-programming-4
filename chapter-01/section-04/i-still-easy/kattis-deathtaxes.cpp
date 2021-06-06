#include <bits/stdc++.h>

using namespace std;

vector<string> split(string s) {
  vector<string> ans = {""};

  for (char c : s) {
    if (c == ' ') {
      ans.push_back("");
    } else {
      ans.back().push_back(c);
    }
  }

  return ans;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int count = 0, shares, price;
  double val = 1;
  string args;


  while (getline(cin, args)) {
    vector<string> s = split(args);
    
    if (s[0] == "buy") {
      shares = stoi(s[1]);
      price = stoi(s[2]);
      
      val = (count * val + shares * price) / (count + shares);
      count += shares;
    } else if (s[0] == "sell") {
      shares = stoi(s[1]);
      price = stoi(s[2]);

      count -= shares;
    } else if (s[0] == "split") {
      int split = stoi(s[1]);
      
      count *= split;
      val /= split;
    } else if (s[0] == "merge") {
      int split = stoi(s[1]);
      count /= split;

      val *= split;
    } else {
      price = stoi(s[1]);
      cout << fixed;
      cout.precision(8);
      cout << count * (price - (max(price - val, 0.0) * .3));
    }
  }
}

