#include <bits/stdc++.h>

using namespace std;

typedef tuple<int, int, int> iii;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int n, d, m, a;

  scanf("%d", &n);

  vector<iii> dates;

  for (int i = 0; i < n; ++i) {
    scanf("%d %d %d", &d, &m, &a);

    dates.emplace_back(m, d, a);
  }

  sort(dates.begin(), dates.end());

  for (auto &[mm, dd, yyyy] : dates) {
    printf("%d %d %d\n", dd, mm, yyyy); 
  }
}

