#include <bits/stdc++.h>

using namespace std;

struct recipe {
  string name;
  int cost;
};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  
  auto comp = [](const recipe& r1, const recipe& r2) {
    if (r1.cost != r2.cost) {
      return r1.cost < r2.cost;
    }

    return r1.name < r2.name;
  };

  string binder, ingredientName, recipeName;

  int t, m, n, b, price, unit, k;
  cin >> t;

  for (int test = 0; test < t; ++test) {
    unordered_map<string, int> ingredients;
    set<recipe, decltype(comp)> recipes(comp);

    cin.ignore();
    getline(cin, binder);
    
    cin >> m >> n >> b;

    for (int i = 0; i < m; ++i) {
      cin >> ingredientName >> price;

      ingredients[ingredientName] = price;
    }
    
    for (int i = 0; i < n; ++i) {
      cin.ignore();
      getline(cin, recipeName);
      
      cin >> k;
      
      recipe r = {recipeName, 0};

      for (int j = 0; j < k; ++j) {
        cin >> ingredientName >> unit;

        r.cost += ingredients[ingredientName] * unit;
      }

      if (r.cost <= b) {
        recipes.insert(r);
      }
    }
    
    transform(binder.begin(), binder.end(), binder.begin(), ::toupper);

    cout << binder << "\n";

    if (recipes.empty()) {
      cout << "Too expensive!\n";
    } else {
      for (auto& p : recipes) {
        cout << p.name << "\n";
      }
    }

    cout << "\n";
  }
}

