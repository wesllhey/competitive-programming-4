#include "bits/stdc++.h"

using namespace std;

char commands[100005];

int main() {
  int tests;

  scanf("%d", &tests);

  for (int test = 1; test <= tests; ++test) {
    scanf("%s", commands);

    int display[100] = {0}, pointer = 0;
    
    for (int i = 0; commands[i]; ++i) {
      switch(commands[i]) {
        case '>':
          ++pointer;

          pointer %= 100;
          break;
        case '<':
          --pointer;

          if (pointer < 0) pointer = 99;
          break;
        case '+':
          display[pointer]++;

          display[pointer] %= 256;
          break;
        case '-':
          display[pointer]--;
          if (display[pointer] < 0) display[pointer] = 255;
          break;
      }        
    }

    printf("Case %d:", test);

    for (int i = 0; i < 100; ++i) {
      printf(" %02X", display[i]);
    }

    printf("\n");
    cin.ignore();
  }
}

