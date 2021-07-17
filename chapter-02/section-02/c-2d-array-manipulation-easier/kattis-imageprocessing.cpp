#include <bits/stdc++.h>

using namespace std;

int getValue(int row, int column, int kernelHeight, int kernelWidth,
    vector<vector<int>>& image, vector<int>& kernel) {
  
  int value = 0, kernelIndex = kernel.size() - 1;
  for (int i = row; i < row + kernelHeight; ++i) {
    for (int j = column; j < column + kernelWidth; ++j) {
      value += image[i][j] * kernel[kernelIndex--];
    } 
  }
  
  return value;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie();
  
  int imageHeight, imageWidth, kernelHeight, kernelWidth;

  scanf("%d %d %d %d", &imageHeight, &imageWidth, &kernelHeight, &kernelWidth);
  
  int height = imageHeight - kernelHeight + 1;
  int width = imageWidth - kernelWidth + 1;

  vector<vector<int>> image(imageHeight, vector<int>(imageWidth));
  vector<int> kernel(kernelHeight * kernelWidth);

  for (int i = 0; i < (int) image.size(); ++i) {
    for (int j = 0; j < (int) image[0].size(); ++j) {
      scanf("%d", &image[i][j]);
    }
  }
  
  for (int i = 0; i < (int) kernel.size(); ++i) {
    scanf("%d", &kernel[i]);
  }

  for (int i = 0; i < height; ++i) {
    for (int j = 0; j < width; ++j) {
      printf("%d ", getValue(i, j, kernelHeight, kernelWidth, image, kernel));
    }

    printf("\n");
  }
}
