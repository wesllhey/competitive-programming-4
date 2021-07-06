#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int group;
  char s[105];

  while (scanf("%d", &group), group) {
    scanf("%s", s);
    
    int size = strlen(s);
   
    group = size / group;

    for (int i = 0; i < size; i += group) {
      for (int j = i + group - 1; j >= i; --j) {
        printf("%c", s[j]);
      }
    }

    printf("\n");
  }
}

