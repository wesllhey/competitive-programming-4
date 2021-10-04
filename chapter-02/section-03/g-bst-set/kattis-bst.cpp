#include <bits/stdc++.h>

using namespace std;

void print(vector<int>& arr) {
  for (int i = 0; i < (int) arr.size(); ++i) {
    if (i) cout << " ";

    cout << arr[i];
  }

  cout << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  
  int n, value;
  long long count = 0;

  cin >> n;
  
  set<int> bst;
  vector<int> arr(n + 1, 0);

  while (n--) {
    cin >> value;

    bst.insert(value);

    auto itLeft = bst.find(value);
    auto itRight = bst.find(value);

    int cost = 0;
    if (itLeft != bst.begin()) {
      itLeft--;

      cost = arr[*(itLeft)];
    }

    if (itRight != bst.end()) {
      itRight++;
      
      if (itRight != bst.end()) {
        cost = max(cost, arr[*(itRight)]);
      }
    }

    count += cost;

    arr[value] = cost + 1;
    
    print(arr);
    cout << count << "\n";
  }
}

