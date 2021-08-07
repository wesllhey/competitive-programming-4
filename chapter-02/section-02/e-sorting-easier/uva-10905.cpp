#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int numbers;

  while (cin >> numbers, numbers) {
    vector<string> arr(numbers);

    for (int i = 0; i < numbers; ++i) {
      cin >> arr[i];
    }

    sort(arr.begin(), arr.end(), [](string& s1, string& s2) -> bool {
    return s2 + s1 < s1 + s2;  
    });

    for (int i = 0; i < numbers; ++i) {
      cout << arr[i];
    }

    cout << "\n";
  } 
}

