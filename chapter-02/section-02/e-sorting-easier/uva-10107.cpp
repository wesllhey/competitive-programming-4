#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int number;

  priority_queue<int> maxHeap;
  priority_queue<int, vector<int>, greater<int>> minHeap;

  while (scanf("%d", &number) != EOF) {
    if (maxHeap.empty() || maxHeap.top() > number) {
      maxHeap.push(number);
    } else {
      minHeap.push(number);
    }

    if (minHeap.size() > maxHeap.size() + 1) {
      maxHeap.push(minHeap.top());
      minHeap.pop();
    } else if (maxHeap.size() > minHeap.size() + 1) {
      minHeap.push(maxHeap.top());
      maxHeap.pop();
    }
    
    int median = 0;
    if (minHeap.empty()) {
      median = maxHeap.top();
    } else {
      if (minHeap.size() == maxHeap.size()) {
        median = (minHeap.top() + maxHeap.top()) / 2;
      } else if (minHeap.size() > maxHeap.size()) {
        median = minHeap.top();
      } else {
        median = maxHeap.top();
      }
    }

    printf("%d\n", median);
  }
}

