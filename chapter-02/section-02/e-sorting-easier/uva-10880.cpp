#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int tests, cookies, left;

  scanf("%d", &tests);

  for (int test = 1; test <= tests; ++test) {
    scanf("%d %d", &cookies, &left);
    
    printf("Case #%d:", test);

    if (cookies == left) {
      printf(" 0\n");
      continue;
    }

    vector<int> division;

    int number = cookies - left;
      
    int sqrtValue = sqrt(number);

    for (int i = 1; i <= sqrtValue; ++i) {
      if (number % i == 0) {
        if (i > left) {
          division.push_back(i);
        }

        if (i != (number / i) && (number / i > left)) {
          division.push_back(number / i);
        }
      }
    }

    sort(division.begin(), division.end());

    for (int i = 0; i < (int) division.size(); ++i) {
      printf(" %d", division[i]); 
    }

    printf("\n");
  }
}

