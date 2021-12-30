#include <bits/stdc++.h>

using namespace std;

string getString(char ch) {
  string str;
  str.append(1, ch);
  return str;
}

int main() {
  // Currently a character
  char ch = '5';

  // We will test the efficacy of this method by pushing it onto a string stack
  stack<string> string_stack;

  string_stack.push(getString(ch));
  cout << string_stack.top() << endl;
  return 0;
}