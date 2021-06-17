#include <bits/stdc++.h>

using namespace std;

void compare(vector<int> arr) {
  if (arr[0] > arr[1]) {
    printf("Bigger\n");    
  } else if (arr[0] == arr[1]) {
    printf("Equal\n");
  } else {
    printf("Smaller\n");
  }
}

void median(vector<int> arr) {
  vector<int> median = {arr[0], arr[1], arr[2]};
  sort(median.begin(), median.end());

  printf("%d\n", median[1]);
}

void jumps(vector<int> arr) {
  unordered_set<int> visited;
  
  int index = 0;

  visited.insert(index);

  while (true) {
    int nextIndex = arr[index];

    if (nextIndex < 0 || nextIndex >= (int) arr.size()) {
      printf("Out\n");
      break;
    }

    if (nextIndex == (int) arr.size() - 1) {
      printf("Done\n");
      break;
    }

    if (visited.find(nextIndex) != visited.end()) {
      printf("Cyclic\n");
      break;
    }

    visited.insert(nextIndex);
    index = nextIndex;
  }
}

void sum(vector<int> arr, bool onlyEven) {
  int sum = 0;
  for (auto value : arr) {
    if (!onlyEven || value % 2 == 0) {
      sum += value;
    }
  }

  printf("%d\n", sum);
}

void letters(vector<int> arr) {
  string s;

  for (auto value : arr) {
    char letter = (char) (value % 26) + 'a';

    s.push_back(letter);
  }

  cout << s;
}

int main() {
  int n, t;

  scanf("%d %d", &n, &t);

  vector<int> arr(n);

  for (int i = 0; i < n; ++i) {
    scanf("%d", &arr[i]);
  }

  switch(t) {
    case 1:
      printf("7\n");
      break;
    case 2:
      compare(arr);
      break;
    case 3:
      median(arr);
      break;
    case 4:
      sum(arr, false);
      break;
    case 5:
      sum(arr, true);
      break;
    case 6:
      letters(arr);
      break;
    case 7:
      jumps(arr);
      break;
  }
}

