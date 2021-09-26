#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int N, M, cd;

  while (cin >> N >> M, N || M) {
    unordered_set<int> jack, sell;

    for (int i = 0; i < N; ++i) {
      cin >> cd;

      jack.insert(cd);
    }

    for (int i = 0; i < M; ++i) {
      cin >> cd;

      if (jack.find(cd) != jack.end() && sell.find(cd) == sell.end()) {
        sell.insert(cd);
      }
    }

    cout << sell.size() << "\n";
  }
}

