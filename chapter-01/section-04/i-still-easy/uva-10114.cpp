#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int months, nDep, depIndex;
  double downPayment, loan, depValue, depreciations[101];

  while (scanf("%d %lf %lf %d", &months, &downPayment, &loan, &nDep), months >= 0) {
    
    for (int i = 0; i < nDep; ++i) {
      scanf("%d %lf", &depIndex, &depValue);

      for (int j = depIndex; j < 101; ++j) {
        depreciations[j] = depValue;
      }
    }

    double monthlyPayment = loan / months;
    double currentValue = (loan + downPayment) * (1 - depreciations[0]);
    double currentLoan = loan;
    
    int ans = 0;

    while (currentValue < currentLoan) {
      currentLoan -= monthlyPayment;
      currentValue *= (1 - depreciations[++ans]);
    }

    printf("%d ", ans);
    printf(ans != 1 ? "months\n" : "month\n");
  }
}

