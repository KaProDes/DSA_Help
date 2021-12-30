// Code snippet useful for measuring program runtime
/*
  Sample Input :
  10000
  100000
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
  int m;
  cin >> m;
  int n;
  cin >> n;

  clock_t tStart = clock(); // Clock start

  vector<vector<int>> matrix(m, vector<int>(n, 0));

  // Code Start

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      matrix[i][j]++;
    }
  }

  // Code End

  printf("\nTime: %.2fs\n",
         (double)(clock() - tStart) / CLOCKS_PER_SEC); // Clock end

  return 0;
}
