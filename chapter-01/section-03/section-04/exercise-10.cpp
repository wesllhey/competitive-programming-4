#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  string s = "line: a70 and z72 will be replaced, aa24 and a872 will not";

  regex r("\\b[a-z][0-9]{2}\\b", regex::optimize);

  s = regex_replace(s, r, "***");

  printf("%s", s.c_str());
}

