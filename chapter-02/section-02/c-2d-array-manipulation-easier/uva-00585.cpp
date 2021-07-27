#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();

  int n, i, j, k, l, test = 0;
  char map[105][300];
  
  while(scanf("%d", &n), n) {
    for(i = 0; i < n; i++) {
      scanf("%s", map[i]);
    }
    
    int ans = 0;
    
    for (i = 0; i < n; i++) {
      for (j = 0; j < 2*n-i; j++) {
        int cnt = 0;
        
        if (j & 1) {
          for(k = i; k < n; k++) {
            for(l = j-(k-i)*2; l <= j; l++) {
              if(l < 0 || l >= 2*n-k) {
                break;
              }
              
              if(map[k][l] != '-') {
                break;
              }
              
              cnt++;
            }
            
            if(l != j+1) {
              break; 
            }
            
            ans = max(ans, cnt);
          }
        } else {
          for (k = i; k >= 0; k--) {
            for (l = j; l <= j + (i - k) *2; l++) {
              if (l < 0 || l >= 2 * n - k) {
                break;
              }
              
              if(map[k][l] != '-') {
                break;
              }
              
              cnt++;
            }
            
            if (l != j + (i - k) * 2 + 1) {
              break;
            }

            ans = max(ans, cnt);
          }
        }
      }
    }
    printf("Triangle #%d\n", ++test);
    printf("The largest triangle area is %d.\n\n", ans);
  }
}

