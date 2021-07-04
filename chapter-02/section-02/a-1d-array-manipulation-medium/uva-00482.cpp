#include <bits/stdc++.h>

using namespace std;

vector<int> readInt() {
  string line;

  getline(cin, line);

  istringstream is(line);

  return vector<int>(istream_iterator<int>(is), istream_iterator<int>());
}

vector<string> readString() {
  string line;

  getline(cin, line);

  istringstream is(line);

  return vector<string>(istream_iterator<string>(is), istream_iterator<string>());
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int tests;

  cin >> tests;

  cin.ignore();
  
  for (int t = 0; t < tests; ++t) {
    cin.ignore();

    vector<int> indexes = readInt();
    vector<string> elements = readString();
    
    vector<string> organized(elements.size());

    for (int i = 0; i < (int) indexes.size(); ++i) {
      organized[indexes[i] - 1] = elements[i]; 
    }
  
    if (t) {
      cout << "\n";
    }

    for (int i = 0; i < (int) organized.size(); ++i) {
      cout << organized[i] << "\n";
    }
  }
}
