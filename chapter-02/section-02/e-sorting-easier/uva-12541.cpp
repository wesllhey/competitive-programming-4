#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int people;
  
  while (cin >> people) {
    int day, month, year, old = INT_MAX, young = INT_MIN;
    string oldName, youngName, name;
    
    while (people--) {
      cin >> name >> day >> month >> year;
    
      const int value = day + month * 100 + year * 1000;

      if (value < old) {
        old = value;
        oldName = name;
      }

      if (value > young) {
        young = value;
        youngName = name;
      }
    }

    cout << youngName << "\n" << oldName << "\n";
  }
}

