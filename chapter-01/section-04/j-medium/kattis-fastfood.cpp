#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int t, prizeNumber, stickerNumber, stickersForPrize;

  cin >> t;

  while (t--) {
    cin >> prizeNumber >> stickerNumber;
    
    vector<int> stickers(stickerNumber);
    vector<vector<int>> prizes(prizeNumber);

    for (int i = 0; i < prizeNumber; ++i) {
      cin >> stickersForPrize;

      vector<int> prize(stickersForPrize + 1);

      for (int j = 0; j <= stickersForPrize; ++j) {
        cin >> prize[j];
      }

      prizes[i] = prize;
    }

    for (int i = 0; i < stickerNumber; ++i) {
      cin >> stickers[i];
    }

    long long ans = 0;

    for (int i = 0; i < prizeNumber; ++i) {
      int minSticker = INT_MAX;

      for (int j = 0; j < (int) prizes[i].size() - 1; ++j) {
        int stickerNeeded = prizes[i][j];
        
        minSticker = min(minSticker, stickers[stickerNeeded - 1]); 
      }
      
      ans += minSticker * prizes[i][prizes[i].size() - 1];
    }

    cout << ans << "\n";
  }
}

