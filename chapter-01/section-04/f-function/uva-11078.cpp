#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int t, n, score;

  scanf("%d", &t);

  while (t--) {
    scanf("%d", &n);

    int maxDiff = INT_MIN, maxScore = INT_MIN;
   
    for (int i = 0; i < n; ++i) {
      scanf("%d", &score);
      
      if (i) {
        int diff = maxScore - score;
        
        maxDiff = max(diff, maxDiff);
        
        maxScore = max(score, maxScore);
      } else {
        maxScore = score;
      }
    }

    printf("%d\n", maxDiff); 
  }
}

