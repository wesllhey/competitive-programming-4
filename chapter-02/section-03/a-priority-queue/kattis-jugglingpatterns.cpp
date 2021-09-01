#include <bits/stdc++.h>

using namespace std;

int getBalls(string& pattern) {
  int count = 0;

  for (char& c : pattern) {
    count += c - '0';
  }
  
  const int balls = count / pattern.size();

  if (balls * (int) pattern.size() != count) {
    return -1;
  }

  return balls;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  string pattern;

  while (cin >> pattern) {
    const int balls = getBalls(pattern);
   
    cout << pattern << ": ";
    if (balls == -1) {
      cout << "invalid # of balls\n";
    } else {
      priority_queue<int, vector<int>, greater<int>> pq;
      int catchTime = pattern[0] - '0' + 1;
      unordered_set<int> memoize;
      bool isValidPattern = true; 
      pq.push(catchTime);

      for (int i = 1; i < 1000; ++i) {
        const int nextTime = pq.top();
        pq.pop();

        if (memoize.find(nextTime) != memoize.end()) {
          isValidPattern = false;
          break;
        }

        memoize.insert(catchTime);
        
        catchTime = pattern[i % (int) pattern.size()] + i + 1;
        pq.push(catchTime);
      }
      
      if (isValidPattern) {
        cout << "valid with " << balls << " balls\n";
      } else {
        cout << "invalid pattern\n";
      }
    }
  }
}

