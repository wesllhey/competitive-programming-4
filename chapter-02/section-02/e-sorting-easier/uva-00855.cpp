#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int tests, streets, avenues, friends;

  scanf("%d", &tests);

  while (tests--) {
    scanf("%d %d %d", &streets, &avenues, &friends);

    vector<int> streetLocations(friends, 0), avenueLocations(friends, 0);

    for (int i = 0; i < friends; i++) {
      scanf("%d %d", &streetLocations[i], &avenueLocations[i]);
    }

    sort(streetLocations.begin(), streetLocations.end());
    sort(avenueLocations.begin(), avenueLocations.end());

    const int index = friends / 2 - (friends % 2 == 0 ? 1 : 0);

    printf("(Street: %d, Avenue: %d)\n", streetLocations[index], avenueLocations[index]);
  }
}

