#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int samplesNumber;

  while (scanf("%d", &samplesNumber), samplesNumber) {
    int music[samplesNumber], peaks = 0;

    for (int i = 0; i < samplesNumber; ++i) {
      scanf("%d", &music[i]);
    }

    for (int i = 0; i < samplesNumber; ++i) {
      int previous = i ? i - 1 : samplesNumber - 1;
      int next = i == samplesNumber - 1 ? 0 : i + 1; 

      if (music[previous] < music[i] && music[next] < music[i]) {
        ++peaks;
        ++i;
      }
    }

    printf("%d\n", 2 * peaks); 
  }
}

