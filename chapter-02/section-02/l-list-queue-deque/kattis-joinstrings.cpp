#include <bits/stdc++.h>

using namespace std;

void print(vector<vector<int>>& arr, vector<string>& words, int index) {
  cout << words[index];

  for (int next : arr[index]) {
    print(arr, words, next);
  }
} 

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int size, a, b, lastIndex = 0;

  cin >> size;

  vector<string> words(size);

  for (int i = 0; i < (int) words.size(); ++i) {
    cin >> words[i];
  }
  
  vector<vector<int>> arr(size);

  for (int i = 0; i < (int) words.size() - 1; ++i) {
    cin >> a >> b;
    --a, --b;

    arr[a].push_back(b);
    lastIndex = a;
  }
  
  print(arr, words, lastIndex);
}

