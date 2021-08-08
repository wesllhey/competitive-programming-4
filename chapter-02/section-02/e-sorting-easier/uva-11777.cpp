#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int tests, term1, term2, finalTest, attendance, class1, class2, class3;
  
  scanf("%d", &tests);

  for (int test = 1; test <= tests; ++test) {
    scanf("%d %d %d %d %d %d %d",
        &term1, &term2, &finalTest, &attendance, &class1, &class2, &class3);

    if (class1 < class2) {
      swap(class1, class2);
    }

    if (class1 < class3) {
      swap(class1, class3);
    }

    if (class2 < class3) {
      swap(class2, class3);
    }

    double ans = term1 + term2 + finalTest + attendance + (class1 + class2) / 2.0;
      
    printf("Case %d: ", test);
    
    if (ans >= 90) {
      printf("A\n");
    } else if (ans >= 80) {
      printf("B\n");
    } else if (ans >= 70) {
      printf("C\n");
    } else if (ans >= 60) {
      printf("D\n");
    } else {
      printf("F\n");
    }
  }
}

