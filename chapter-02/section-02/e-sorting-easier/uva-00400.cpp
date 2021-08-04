#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  string filename;
  int files;

  while (cin >> files) {
    int longest = 0;
    vector<string> names(files);

    for (int i = 0; i < files; ++i) {
      cin >> names[i];
      
      longest = max(longest, (int) names[i].size());
    }

    sort(names.begin(), names.end());
    
    int columns = (60 - longest) / (longest + 2) + 1;
    int rows = names.size() / columns + ((int) names.size() % columns ? 1 : 0);

    cout << "------------------------------------------------------------\n";

    for (int row = 0; row < rows; ++row) {
      for (int column = 0; column < columns; ++column) {
        if (column == columns - 1) {
          cout.width(longest);
        } else {
          cout.width(longest + 2);
        }

        const int index = row + column * rows;
        if (index >= (int) names.size()) {
          break;
        }

        cout << left << names[index];
      }

      cout << "\n";
    }
  }
}

