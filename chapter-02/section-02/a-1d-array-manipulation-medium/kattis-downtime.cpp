#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int requestNumber, rps, maxRPS = 1, currentRPS = 1, nextRequest = 0;

  scanf("%d %d", &requestNumber, &rps);

  int requests[requestNumber];

  for (int i = 0; i < requestNumber; ++i) {
    scanf("%d", &requests[i]);
  }

  for (int i = 1; i < requestNumber; ++i) {
    ++currentRPS;

    while (requests[i] >= requests[nextRequest] + 1000) {
      --currentRPS;
      ++nextRequest;
    }

    maxRPS = max(maxRPS, currentRPS);
  }

  printf("%d", (maxRPS + rps - 1) / rps);
}

