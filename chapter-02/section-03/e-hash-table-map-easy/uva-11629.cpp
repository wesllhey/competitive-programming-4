#include <bits/stdc++.h>

using namespace std;

vector<string> split(string &s) {
  vector<string> ans;
  
  size_t start = 0, end = s.find(" ");

  while (end != string::npos) {
    ans.push_back(s.substr(start, end - start));
    start = end + 1;
    end = s.find(" ", start);
  }

  ans.push_back(s.substr(start, s.size() - start));


  return ans; 
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  string party, guess;
  int parties, guesses, first, second;
  char dec;

  cin >> parties >> guesses;
  
  unordered_set<string> comp = {"<", "<=", ">", ">=", "="};
  unordered_map<string, int> mp;
  
  for (int i = 0; i < parties; ++i) {
    cin >> party >> first >> dec >> second;

    mp[party] = first * 10 + second;
  }
  cin.ignore();
  for (int test = 1; test <= guesses; ++test) {
    getline(cin, guess);

    vector<string> result = split(guess);
    
    string op;
    int sum = 0;
    bool isValid = true;

    int last = stoi(result.back()) * 10;
     
    for (int i = 0; i < (int) result.size(); ++i) {
      const string value = result[i];
      if (value == "+") continue;
      if (comp.find(value) != comp.end()) {
        op = value;
        break;
      }
      sum += mp[value];
    }

    if (op == ">") {
      isValid = sum > last;
    } else if (op == ">=") {
      isValid = sum >= last;
    } else if (op == "<") {
      isValid = sum < last;
    } else if (op == "<=") {
      isValid = sum <= last;
    } else {
      isValid = sum == last;
    }
    
    cout << "Guess #" << test << " was ";
    if (isValid) {
      cout << "correct.\n";
    } else {
      cout << "incorrect.\n";
    }
  }
}

