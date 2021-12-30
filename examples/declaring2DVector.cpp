#include <iostream>
#include <vector>
using namespace std;
int main() {
  int m = 4;
  int n = 5;

  /*
  We create a 2D vector containing "m"
  elements each having the value "vector<int> (n, 69)".
  "vector<int> (n, 69)" means a vector having "n"
  elements each of value "69".
  Here these elements are vectors.
  */
  vector<vector<int>> matrix(m, vector<int>(n, 69));

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}