#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  char m[3];
  int d;

  scanf("%s %d", m, &d);
  if ((strcmp(m, "OCT") == 0 && d == 31) || (strcmp(m,  "DEC") == 0 && d == 25)) {
    printf("yup");
  } else {
    printf("nope");
  }
}

