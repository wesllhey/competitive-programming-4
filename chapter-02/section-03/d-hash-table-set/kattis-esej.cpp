#include <bits/stdc++.h>

using namespace std;

void permutation(string letters, int end) {
  for (int i = 0; i < end; ++i) {
    if (i) cout << " ";

    cout << letters;

    next_permutation(letters.begin(), letters.end());
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  
  int A, B;

  cin >> A >> B;
  B = (B + B - 1) / 2;

  const int end = max(A, B);

  string letters = "abcdefghijklmno";

  permutation(letters, end);
}

