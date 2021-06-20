#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int height, width, numberBriks, brick;

  cin >> height >> width >> numberBriks;

  int currentWidth = width;
  bool canComplete = true;

  for (int i = 0; i < numberBriks; ++i) {
    cin >> brick;

    if (height && canComplete) {
      if (currentWidth - brick >= 0) {
        currentWidth -= brick;
      } else {
        canComplete = false;
      }

      if (currentWidth == 0) {
        height--;
        currentWidth = width;
      }
    }
  }

  if (canComplete) {
    cout << "YES";
  } else {
    cout << "NO";
  }
}

