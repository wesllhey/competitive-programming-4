#include <bits/stdc++.h>

using namespace std;

bool isSum7777(vector<int>& numbers) {
  unordered_set<int> st;

  for (int number : numbers) {
    int matchNumber = 7777 - number;

    if (st.find(matchNumber) != st.end()) {
      return true;
    }

    st.insert(number);
  }

  return false;
}

bool isUnique(vector<int>& numbers) {
  unordered_set<int> st;

  for (int number : numbers) {
    if (st.find(number) != st.end()) {
      return false;
    }

    st.insert(number);
  }

  return true;
}

int majorityElement(vector<int>& numbers) {
  int maxFrequency = 0, majorityElement = -1;
  unordered_map<int, int> mp;

  for (int number : numbers) {
    mp[number]++;
    
    if (mp[number] > maxFrequency) {
      maxFrequency = mp[number];

      if (maxFrequency > (int) numbers.size() / 2) {
        majorityElement = number;
        break;
      }
    }
  }

  return majorityElement;
}

void printMedian(vector<int>& numbers) {
  sort(numbers.begin(), numbers.end());
  
  const int size = numbers.size();
  if (size & 1) {
    printf("%d\n", numbers[size / 2]);
  } else {
    printf("%d %d\n", numbers[size / 2 - 1], numbers[size / 2]); 
  }
}

void printBetween100And999(vector<int>& numbers) {
  sort(numbers.begin(), numbers.end());

  for (int number : numbers) {
    if (number >= 100 && number <= 999) {
      printf("%d ", number);
    }
  }

  printf("\n");
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int size, operation;
  scanf("%d %d", &size, &operation);

  vector<int> numbers(size);

  for (int i = 0; i < size; ++i) {
    scanf("%d", &numbers[i]);
  }
  
  if (operation == 1) {
    printf("%s\n", isSum7777(numbers) ? "Yes" : "No"); 
  } else if (operation == 2) {
    printf("%s\n", isUnique(numbers) ? "Unique" : "Contains duplicate");
  } else if (operation == 3) {
    printf("%d\n", majorityElement(numbers));
  } else if (operation == 4) {
    printMedian(numbers);
  } else {
    printBetween100And999(numbers);
  }
}

