#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int elementsNumber, number;

  scanf("%d", &elementsNumber);

  vector<int> arr;

  for (int i = 0; i < elementsNumber; ++i) {
    scanf("%d", &number);
    
    if (arr.empty() || number > arr[(int) arr.size() - 1]) {
      arr.push_back(number);
    }
  }

  printf("%ld\n", arr.size());
  
  for (int i = 0; i < (int) arr.size(); ++i) {
    printf("%d ", arr[i]);
  }

}

