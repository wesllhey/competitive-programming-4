#include <bits/stdc++.h>

using namespace std;

int getHighest(vector<int>& red, vector<int>& blue, bool isBlueTurn) { 
  int ans = 0;
  
  int size = INT_MAX, redIndex = red.size() - 1, blueIndex = blue.size() - 1;

  while (redIndex >= 0 || blueIndex >= 0) {
    if (isBlueTurn) {
      if (blueIndex < 0) break;

      if (blue[blueIndex] < size) {
        ++ans;
        isBlueTurn = false;
        size = blue[blueIndex];
      }
        
      --blueIndex;
    } else {
      if (redIndex < 0) break;
      if (red[redIndex] < size) {
        ++ans;
        isBlueTurn = true;
        size = red[redIndex];
      }

      --redIndex;
    }
  }

  return ans;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int tests, floorsNumber, x;

  scanf("%d", &tests);

  while (tests--) {
    scanf("%d", &floorsNumber);
    vector<int> red, blue;

    for (int i = 0; i < floorsNumber; ++i) {
      scanf("%d", &x);

      if (x < 0) {
        red.push_back(x * -1);
      } else {
        blue.push_back(x);
      }
    }
    
    sort(red.begin(), red.end());
    sort(blue.begin(), blue.end());

    const int ans = max(getHighest(red, blue, true), getHighest(red, blue, false));
        
    printf("%d\n", ans);
  }
}

