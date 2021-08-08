#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int tests, candidatesNumber, states;

  scanf("%d", &tests);
  
  while (tests--) {
    scanf("%d %d", &candidatesNumber, &states);
    
    vector<double> candidatesPercent(candidatesNumber);
    vector<int> votes(states);
    double totalVotes = 0.0;

    vector<pair<int, int>> candidatesVote(candidatesNumber);

    for (int i = 0; i < states; ++i) {
      for (int j = 0; j < candidatesNumber; ++j) {
        scanf("%lf", &candidatesPercent[j]); 
      }
      scanf("%d", &votes[i]);
      totalVotes += votes[i];

      for (int j = 0; j < candidatesNumber; ++j) {
        candidatesVote[j].second = j + 1;
        candidatesVote[j].first += candidatesPercent[j] * (votes[i] / 100);
      }
    }

    sort(candidatesVote.begin(), candidatesVote.end(), greater<pair<int,int>>());
    
    int size = 2;

    if (candidatesVote[0].first / totalVotes * 100 >= 50.1) {
      size = 1;
    }  

    for (int i = 0; i < size; ++i) {
      printf("%d %d\n", candidatesVote[i].second, candidatesVote[i].first); 
    }

    if (tests) {
      printf("\n");
    }
  }
}

