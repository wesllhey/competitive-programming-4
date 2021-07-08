#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int initialProblems, test = 0;

  while (scanf("%d", &initialProblems), initialProblems >= 0) {
    int problems[13], required[12];

    problems[0] = initialProblems;

    for (int i = 1; i <= 12; ++i) {
      scanf("%d", &problems[i]);
    }

    for (int i = 0; i < 12; ++i) {
      scanf("%d", &required[i]);
    }

    printf("Case %d:\n", ++test);

    for (int i = 0; i < 12; ++i) {
      if (problems[i] < required[i]) {
        problems[i + 1] += problems[i];

        printf("No problem. :(\n");
      } else {
        problems[i + 1] += problems[i] - required[i];

        printf("No problem! :D\n");
      }
    }
  }
}

