// Quick tips for creating objects in C++ and sorting them on the bases of a
// custom attribute

/*
  Sample input :
  10

  22 28
  1 8
  25 27
  14 19
  27 30
  5 12
  23 28
  19 20
  2 4
  16 21
*/

#include <algorithm>
#include <iostream>
#include <stack>
#include <vector>

using namespace std;

class Interval {
public:
  int startTime;
  int endTime;
};

int main() {
  int n;
  cin >> n;
  int startTime, endTime;

  vector<Interval> intervals;

  for (int i = 0; i < n; i++) {
    cin >> startTime;
    cin >> endTime;
    Interval intr;
    intr.startTime = startTime;
    intr.endTime = endTime;
    intervals.push_back(intr);
    /*
      Shorthand :
      Interval intr{startTime,endTime};
      intervals.push_back()
    */
  }

  sort(intervals.begin(), intervals.end(),
       [](Interval a, Interval b) { return a.startTime < b.startTime; });

  for (int i = 0; i < intervals.size(); i++) {
    cout << intervals[i].startTime << " " << intervals[i].endTime << endl;
  }

  return 0;
}