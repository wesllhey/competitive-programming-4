#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int n;
  
  scanf("%d", &n);

  char people[n][100];
  
  char words[16][9] = {
    "Happy", 
    "birthday", 
    "to",
    "you",
    "Happy", 
    "birthday",
    "to", 
    "you",
    "Happy",
    "birthday",
    "to", 
    "Rujia", 
    "Happy",
    "birthday", 
    "to", 
    "you"
  };

  for (int i = 0; i < n; ++i) {
    scanf("%s", people[i]);
  }

  int c = 0;

  while (c < n) {
    for (int i = c % 16; i < 16; ++i) {
      printf("%s: %s\n", people[c % n], words[i]);

      ++c;
    }
  }
}

