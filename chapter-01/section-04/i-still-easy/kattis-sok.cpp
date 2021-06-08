#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int orangeLiters, appleLiters, pineappleLiters;
  int orangeRatio, appleRatio, pineappleRatio;

  scanf("%d %d %d", &orangeLiters, &appleLiters, &pineappleLiters);
  scanf("%d %d %d", &orangeRatio, &appleRatio, &pineappleRatio);

  double orangeRatioUsed = (double) orangeLiters / orangeRatio;
  double appleRatioUsed = (double) appleLiters / appleRatio;
  double pineappleRatioUsed = (double) pineappleLiters / pineappleRatio;
  
  double minQuotient = min({orangeRatioUsed, appleRatioUsed, pineappleRatioUsed});

  printf("%.6lf %.6lf %.6lf",
      orangeLiters - orangeRatio * minQuotient,
      appleLiters - appleRatio * minQuotient,
      pineappleLiters - pineappleRatio * minQuotient);
}

