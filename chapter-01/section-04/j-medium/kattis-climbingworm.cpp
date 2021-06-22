#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int climb, fall, height, time = 0, crawl = 0;

  cin >> climb >> fall >> height;

  while (crawl < height) {
    crawl += climb;
    ++time;

    if (crawl >= height) break;

    crawl -= fall;
  }

  cout << time;
}

