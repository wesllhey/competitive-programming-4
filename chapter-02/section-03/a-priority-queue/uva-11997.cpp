#include <bits/stdc++.h>

using namespace std;

int main() {
  //ios::sync_with_stdio(false);
  //cin.tie(0);
  
  const auto cmp = [](const pair<int, int>& p1, const pair<int, int>& p2){
    return p1.first > p2.first;
  };

  int k;

  while (cin >> k) {
    vector<int> arr1(k), arr2(k);

    for (int i = 0; i < k; ++i) {
      cin >> arr1[i];
    }

    sort(arr1.begin(), arr1.end());

    for (int i = 1; i < k; ++i) {
      priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(cmp)> pq(cmp);
      
      for (int j = 0; j < k; ++j) {
        cin >> arr2[j];
      }

      sort(arr2.begin(), arr2.end());
      
      for (int index = 0; index < k; ++index) {
        pq.push({arr1[index] + arr2[0], 0});
      }
    
      for (int index = 0; index < k; ++index) {
        const pair<int, int> p = pq.top();
        pq.pop();
        
        arr1[index] = p.first;

        if (p.second + 1 < k) {
          pq.push({p.first - arr2[p.second] + arr2[p.second + 1], p.second + 1});
        }
      }
    }
    
    for (int i = 0; i < k; ++i) {
      if (i) {
        cout << " ";
      }
      cout << arr1[i];
    }

    cout << "\n";
  }
}

