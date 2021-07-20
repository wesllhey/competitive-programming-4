#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int nProblems, nTeams, nSubmissions;

  scanf("%d %d %d", &nProblems, &nTeams, &nSubmissions);

  vector<pair<int, int>> ans(nProblems, {-1, -1});
  vector<vector<bool>> subs(nTeams + 1, vector<bool>(nProblems, false)); 
  while (nSubmissions--) {
    int time, team;
    char question[25], status[25];
    
    scanf("%d %d %s %s", &time, &team, question, status);

    const int questionIndex = question[0] - 'A';

    if (!subs[team][questionIndex] && status[0] == 'Y') {
      subs[team][questionIndex] = true;

      ans[questionIndex].first = time;
      ans[questionIndex].second = team;
    }
  }

  for (int i = 0; i < nProblems; ++i) {
    const auto p = ans[i];
    printf("%c ", (char) 'A' + i);
    
    if (p.first != -1) {
      printf("%d %d\n", p.first, p.second);
    } else {
      printf("- -\n");
    }
  }
}

