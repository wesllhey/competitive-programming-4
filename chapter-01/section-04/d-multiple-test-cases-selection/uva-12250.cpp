#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  char s[14];
  int c = 0;

  while (scanf("%s", s), strcmp(s, "#") != 0) {
    printf("Case %d: ", ++c);

    if (strcmp(s, "HELLO") == 0) {
      printf("ENGLISH\n");  
    } else if (strcmp(s, "HOLA") == 0) {
      printf("SPANISH\n");
    } else if (strcmp(s, "HALLO") == 0) {
      printf("GERMAN\n");
    } else if (strcmp(s, "BONJOUR") == 0) {
      printf("FRENCH\n");
    } else if (strcmp(s, "CIAO") == 0) {
      printf("ITALIAN\n");
    } else if (strcmp(s, "ZDRAVSTVUJTE") == 0) {
      printf("RUSSIAN\n");
    } else {
      printf("UNKNOWN\n");
    }
  }
}

