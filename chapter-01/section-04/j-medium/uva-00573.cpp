#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int wellHeight, slideDistance, fatigue;
  double climbDistance;

  while (cin >> wellHeight >> climbDistance >> slideDistance >> fatigue, wellHeight) {
    int ans = 1;
    double fatigueFactor = climbDistance * (fatigue / 100.0), distanceClimbed = 0;
  
    while (true) {
      distanceClimbed += climbDistance;

      if (distanceClimbed > wellHeight) break;
    
      distanceClimbed -= slideDistance;
      climbDistance -= fatigueFactor;
      climbDistance = max(0.0, climbDistance);
      
      if (distanceClimbed < 0) break;
     
      ++ans;
    }

    if (distanceClimbed > 0) {
      cout << "success on day " << ans << "\n";
    } else {
      cout << "failure on day " << ans << "\n";
    }
  }
}

