#include <bits/stdc++.h>

using namespace std;

int getDiff(vector<int>& candidates, int i, int j) {
  
  return min(abs(candidates[i] - candidates[j]), 24 - abs(candidates[i] - candidates[j]));
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int candidatesNumber;

  while(scanf("%d", &candidatesNumber) != EOF) {
    vector<int> candidates(candidatesNumber);
    int ans1 = 0, ans2 = 0;

    for (int i = 0; i < candidatesNumber; ++i) {
      scanf("%d", &candidates[i]);
    }

    sort(candidates.begin(), candidates.end());

    for (int i = 0; i < candidatesNumber; i += 2) {
      ans1 += getDiff(candidates, i, i + 1);
    }
    
    // 0 1 2 3 4 5

    for (int i = 1; i < candidatesNumber - 1; i += 2) {
      ans2 += getDiff(candidates, i, i + 1);
    }

    ans2 += getDiff(candidates, 0, candidatesNumber - 1);

    printf("%d\n", min(ans1, ans2));
  }
}

