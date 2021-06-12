#include <bits/stdc++.h>

using namespace std;

int main() {
  double value;
  string req, prop;
  int numberReq, numberProp, reqMet, test = 0;

  while (scanf("%d %d", &numberReq, &numberProp), numberReq || numberProp) {
    unordered_set<string> requirements;
    
    for (int i = 0; i < numberReq; ++i) {
      cin.ignore();
      getline(cin, req);
    }
    
    string propName;
    double minPropValue = INT_MAX;
    int maxReqMet = 0;

    for (int i = 0; i < numberProp; ++i) {
      getline(cin, prop);
      scanf("%lf %d\n", &value, &reqMet);
      
      
      for (int j = 0; j < reqMet; ++j) {
        getline(cin, req);
      }
    
      if (reqMet > maxReqMet  
          || (reqMet == maxReqMet && value < minPropValue)) {
        propName = prop;
        maxReqMet = reqMet;
        minPropValue = value;
      }
    }
    
    if (test > 0) cout << "\n";

    cout << "RFP #" << ++test << "\n";
    cout << propName << "\n";
  }
}

