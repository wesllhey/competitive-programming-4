#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int N = 20;

  vector<vector<int>> arr = {{}};

  for (int i = 0; i < N; ++i) {
    const int len = arr.size();
    
    for (int j = 0; j < len; ++j) {
      vector<int> sub = arr[j];

      sub.push_back(i);

      arr.push_back(sub);
    }
  }

  for (int i = 0; i < (int) arr.size(); ++i) {
    for (int j = 0; j < (int) arr[i].size(); ++j) {
      printf("%d", arr[i][j]);
    }

    printf("\n");
  }
}

