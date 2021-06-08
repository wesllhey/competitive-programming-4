#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int speed, ans = 0;
  double gallons, leakRate, distance, fuel;

  scanf("%lf %lf %lf", &gallons, &leakRate, &distance);

  gallons /= 2;

  for (int i = 0; i < 6; ++i) {
    scanf("%d %lf", &speed, &fuel);

    double lossGallons = (distance / speed) * leakRate;

    double currentGallons = gallons - lossGallons;
   

    if (currentGallons * fuel >= distance) {
      ans = speed;
    }
  }

  if (ans) {
    printf("YES %d\n", ans);
  } else {
    printf("NO\n");
  }
}

