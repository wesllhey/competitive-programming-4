#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int size;

  while (scanf("%d", &size), size) {
    int matrix[size][size];
    
    for (int i = 0; i < size; ++i) {
      for (int j = 0; j < size; ++j) {
        scanf("%d", &matrix[i][j]);
      }
    }
    
    int row[size] = {0}, column[size] = {0};

    for (int i = 0; i < size; ++i) {
      for (int j = 0; j < size; ++j) {
        row[i] += matrix[i][j];
        column[i] += matrix[j][i];
      }
    }
    
    int rowCount = 0, columnCount = 0, rowIndex = 0, columnIndex = 0;
    for (int i = 0; i < size; ++i) {
      if (row[i] & 1) {
        ++rowCount;
        rowIndex = i;
      }

      if (column[i] & 1) {
        ++columnCount;
        columnIndex = i;
      }
    }

    if (!rowCount && !columnCount) {
      printf("OK\n");
    } else if (rowCount == 1 && columnCount == 1) {
      printf("Change bit (%d,%d)\n", rowIndex + 1, columnIndex + 1);
    } else {
      printf("Corrupt\n");
    }
  }
}

