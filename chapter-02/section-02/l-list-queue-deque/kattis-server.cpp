#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  bool canComplete = true;
  int tasks, time, maxTime, currentTime = 0, count = 0;
  
  cin >> tasks >> maxTime;

  for (int i = 0; i < tasks; ++i) {
    cin >> time;
    
    if (currentTime + time <= maxTime && canComplete) {
      currentTime += time;
      ++count;
    } else {
      canComplete = false;
    }
  }

  cout << count;
}

