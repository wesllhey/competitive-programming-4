#include <bits/stdc++.h>

using namespace std;

void dfs(string& source, string& target, stack<char>& s, 
    int sourceIndex, int targetIndex, string& sequence,
    vector<string> &ans) {
  if (targetIndex == (int) target.size()) {
    ans.push_back(sequence);
    return;
  } 

  if (!s.empty() && s.top() == target[targetIndex]) {
    const char c = s.top();
    s.pop();
    sequence.push_back('o');
    
    dfs(source, target, s, sourceIndex, targetIndex + 1, sequence, ans);
    sequence.pop_back();
    s.push(c);
  }

  if (sourceIndex < (int) source.size()) {
    sequence.push_back('i');
    s.push(source[sourceIndex]);
  
    dfs(source, target, s, sourceIndex + 1, targetIndex, sequence, ans);
    sequence.pop_back();
    s.pop();
  }
} 

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  string source, target;

  while (cin >> source) {
    cin >> target;
    
    vector<string> ans;
    stack<char> s;
    string sequence;
    dfs(source, target, s, 0, 0, sequence, ans);
    
    sort(ans.begin(), ans.end());
    cout << "[\n";
    for (int i = 0; i < (int) ans.size(); ++i) {
      for (int j = 0; j < (int) ans[i].size(); ++j) {
        if (j) cout << " ";
        cout << ans[i][j];
      }
      cout << "\n";
    }
    cout << "]\n";
  }
}

