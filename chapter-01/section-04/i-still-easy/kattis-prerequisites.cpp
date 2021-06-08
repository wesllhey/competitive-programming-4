#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int numberCourses, numberCategories, course, courseCategory, minCourses;

  
  while (scanf("%d", &numberCourses), numberCourses) {
    unordered_set<int> courses;

    scanf("%d", &numberCategories);
    
    for (int i = 0; i < numberCourses; ++i) {
      scanf("%d", &course);
      courses.insert(course);
    }

    bool canComplete = true;

    while (numberCategories--) {
      scanf("%d %d", &courseCategory, &minCourses);
      
      int countCourses = 0;
      for (int i = 0; i < courseCategory; ++i) {
        scanf("%d", &course);

        if (courses.find(course) != courses.end()) {
          ++countCourses;
        }
      }

      if (countCourses < minCourses) {
        canComplete = false;
      }
    }
    
    printf(canComplete ? "yes\n" : "no\n");
  }
}

