#include <bits/stdc++.h>

using namespace std;

struct cat {
  int id;
  string name;
  int infection;
};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  
  string name;
  int commands, action, infection, id = 0;

  cin >> commands;

  const auto comp = [](const cat& c1, const cat& c2) {
    if (c1.infection != c2.infection) {
      return c1.infection > c2.infection;
    }

    return c1.id < c2.id;
  };

  set<cat, decltype(comp)> st(comp);
  map<string, cat> mp;

  while (commands--) {
    cin >> action;

    if (action == 0) {
      cin >> name >> infection;
      
      cat c = {id++, name, infection};

      mp[name] = c;
      st.insert(c);
    } else if (action == 1) {
      cin >> name >> infection;

      cat c = mp[name];
      
      st.erase(c);

      c.infection += infection;

      mp[name] = c;

      st.insert(c);
    } else if (action == 2) {
      cin >> name;
      cat c = mp[name];
      
      st.erase(c);
      mp.erase(name);
    } else {
      if (st.empty()) {
        cout << "The clinic is empty\n";
      } else {
        cout << st.begin()->name << "\n";
      }
    }
  }
}

