#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  char beforeDelection[1005], afterDelection[1005];
  int maxSecurity;

  scanf("%d", &maxSecurity);
  scanf("%s", beforeDelection);
  scanf("%s", afterDelection);
  
  bool success = true;
  for (int i = 0; beforeDelection[i]; ++i) {
    if (maxSecurity & 1) {
      if (beforeDelection[i] == afterDelection[i]) {
        success = false;
        break;
      }
    } else if (beforeDelection[i] != afterDelection[i]) {
      success = false;
      break;
    }
  }
  
  if (success) {
    printf("Deletion succeeded");
  } else {
    printf("Deletion failed");
  }
}

