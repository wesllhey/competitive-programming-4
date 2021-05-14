// UVA: 10911 - Forming Quiz Teams

#include <bits/stdc++.h>

using namespace std;

double getDistance(pair<int, int> &a, pair<int, int> &b) {
  return sqrt(pow(b.first - a.first, 2) + pow(b.second - a.second, 2));
}

int getNextIndex(vector<bool> &memoize) {
  for (int i = 0; i < (int) memoize.size(); ++i) {
    if (!memoize[i]) {
      return i;
    }
  }

  return -1;
}

double getMinCost(
    vector<pair<int, int>> &coordinates,
    vector<bool> &memoize, 
    const int index,
    double minCost,
    double currentCost) {
  
  if (currentCost >= minCost) {
    return currentCost;
  }

  memoize[index] = true;

  for (int i = index + 1; i < (int) coordinates.size(); ++i) {
    if (memoize[i]) continue;

    memoize[i] = true;

    double distance = getDistance(coordinates[index], coordinates[i]);

    currentCost += distance;
    
    int nextIndex = getNextIndex(memoize);
    
    if (nextIndex != -1) {
      double newCost = getMinCost(coordinates, memoize, nextIndex, minCost, currentCost);

      minCost = min(newCost, minCost);
    } else {
      minCost = min(currentCost, minCost);
      memoize[i] = false;

      break;
    }
    
    memoize[i] = false;

    currentCost -= distance;
  }

  memoize[index] = false;

  return minCost;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  
  int N, x, y, caseNumber = 0;
  string s;
  
  while (scanf("%d", &N), N) {
    vector<pair<int, int>> coordinates;

    for (int i = 0; i < 2 * N; ++i) {
      scanf("%*s %d %d", &x, &y) ;

      coordinates.push_back({x, y});
    }

    vector<bool> memoize(coordinates.size());
  
    double minCost = getMinCost(coordinates, memoize, 0, 1e9, 0);
  
    printf("Case %d: %.2lf\n", ++caseNumber, minCost);
  }
}

