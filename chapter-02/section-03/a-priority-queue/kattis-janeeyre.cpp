#include <bits/stdc++.h>

using namespace std;

struct book {
  string name;
  int pages;
  int time;
  bool isJaneEyre;
};

vector<string> split(string &s) {
  size_t start = 0, next = s.find(" ");
  
  vector<string> ans;
  while (next != string::npos) {
    ans.push_back(s.substr(start, next - start + 1));
    start = next + 1;
    next = s.find(" ", start);
  }
  
  ans.push_back(s.substr(start, next - start + 1));
  return ans;
}

string getBookName(string& line) {
  size_t start = line.find("\"") + 1;
  size_t end = line.find("\"", start);

  return line.substr(start, end - start);
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  
  string line;
  int unreadBooks, friendBooks, janeEyrePages;
  
  cin >> unreadBooks >> friendBooks >> janeEyrePages;
  cin.ignore();

  const auto comp = [](const auto& b1, const auto& b2){
    return b1.name > b2.name;
  };

  priority_queue<book, vector<book>, decltype(comp)> pq(comp);
  pq.push({"Jane Eyre", janeEyrePages, 0, true});
 
  for (int i = 0; i < unreadBooks; ++i) {
    getline(cin, line);
    const auto bookName = getBookName(line);
    vector<string> fields = split(line);
    pq.push({bookName, stoi(fields.back()), 0, false});
  }
  
  vector<book> receivedBooks(friendBooks);
  for (int i = 0; i < friendBooks; ++i) {
    getline(cin, line);
    vector<string> fields = split(line);
    int time = stoi(fields[0]);
    string name = getBookName(line);
    int pages = stoi(fields.back());
    
    receivedBooks[i] = {name, pages, time, false};
  }
  
  sort(receivedBooks.begin(), receivedBooks.end(), [](const auto& b1, const auto& b2){
    return b1.time < b2.time;
  });
  
  long long time = 0;
  int index = 0;

  while (true) {
    while (index < (int) receivedBooks.size() &&
        receivedBooks[index].time <= time) {
      pq.push(receivedBooks[index++]);
    }

    const auto currentBook = pq.top();
    pq.pop();
    
    time += currentBook.pages;

    if (currentBook.isJaneEyre) {
      break;
    }
  }
  
  cout << time;
}

