#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int tests;

  scanf("%d", &tests);

  for (int test = 1; test <= tests; ++test) {
    int size; 
    bool isSymetric = true;
    
    scanf("%*s %*s %d", &size);
    
    long long matrix[size][size];
    
    for (int i = 0; i < size; ++i) {
      for (int j = 0; j < size; ++j) {
        scanf("%lld", &matrix[i][j]);    
        
        if (matrix[i][j] < 0) {
          isSymetric = false;
        }
      }
    }

    for (int i = 0; i < size && isSymetric; ++i) {
      for (int j = 0; j < size - i; ++j) {
        if (matrix[i][j] != matrix[size-i-1][size-j-1]) {
          isSymetric = false;
          break;
        }
      }
    }
    
    printf("Test #%d: ", test);
    printf(isSymetric ? "Symmetric.\n" : "Non-symmetric.\n");
  }
}

