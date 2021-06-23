#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

vector<pair<ll, ll>> getWays(int start1, int end1, int start2, int end2) {
  vector<pair<ll, ll>> ways(2);

  long time1, time2;

  time1 = abs(start1) + abs(start1 - end1);
  time2 = time1 + abs(end1 - start2) + abs(start2 - end2);

  ways[0] = {time1, time2};

  time1 = abs(start2) + abs(start2 - start1) + abs(start1 - end1);
  time2 = time1 + abs(end1 - start1) + abs(start1 - end2);

  ways[1] = {time1, time2};

  return ways;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int monicaStart, lydiaStart, monicaEnd, lydiaEnd, monicaTime, lydiaTime;
  
  cin >> monicaStart >> lydiaStart;
  cin >> monicaEnd >> lydiaEnd;
  cin >> monicaTime >> lydiaTime;

  vector<pair<ll, ll>> monicaWays = getWays(monicaStart, monicaEnd, lydiaStart, lydiaEnd);

  vector<pair<ll, ll>> lydiaWays = getWays(lydiaStart, lydiaEnd, monicaStart, monicaEnd);
  
  if ((monicaTime >= monicaWays[0].first && lydiaTime >= monicaWays[0].second) ||
      (monicaTime >= monicaWays[1].first && lydiaTime >= monicaWays[1].second) ||
      (lydiaTime >= lydiaWays[0].first && monicaTime >= lydiaWays[0].second) ||
      (lydiaTime >= lydiaWays[1].first && monicaTime >= lydiaWays[1].second)) {
    cout << "possible";
  } else {
     cout << "impossible";
  }  
}

