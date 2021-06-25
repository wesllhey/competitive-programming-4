#include <bits/stdc++.h>

using namespace std;

map<string, map<string, string> > bends;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();

  bends["+x"]["+y"] = "+y";
	bends["+x"]["-y"] = "-y";
	bends["+x"]["+z"] = "+z";
	bends["+x"]["-z"] = "-z";
	bends["-x"]["+y"] = "-y";
	bends["-x"]["-y"] = "+y";
	bends["-x"]["+z"] = "-z";
	bends["-x"]["-z"] = "+z";
	bends["+y"]["+y"] = "-x";
	bends["+y"]["-y"] = "+x";
	bends["+y"]["+z"] = "+y";
	bends["+y"]["-z"] = "+y";
	bends["-y"]["+y"] = "+x";
	bends["-y"]["-y"] = "-x";
	bends["-y"]["+z"] = "-y";
	bends["-y"]["-z"] = "-y";
	bends["+z"]["+y"] = "+z";
	bends["+z"]["-y"] = "+z";
	bends["+z"]["+z"] = "-x";
	bends["+z"]["-z"] = "+x";
	bends["-z"]["+y"] = "-z";
	bends["-z"]["-y"] = "-z";
	bends["-z"]["+z"] = "+x";
	bends["-z"]["-z"] = "-x";

  int length;

  while (cin >> length, length) {
    string current = "+x", bend;

    for (int i = 0; i < length - 1; ++i) {
      cin >> bend;
      
      if (bend != "No") {
        current = bends[current][bend];
      }
    }

    cout << current << "\n";
  }
}

