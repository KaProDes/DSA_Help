/*
  Sample Input :
  6
  22 28
  1 8
  25 27
  14 19
  27 30
  5 12
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

// The function that accepts vector by reference
void sortIntervals(vector<Interval> &intervals) {
  sort(intervals.begin(), intervals.end(),
       [](Interval a, Interval b) { return a.startTime < b.startTime; });
}

int main() {
  int n;
  cin >> n;
  int startTime, endTime;

  vector<Interval> intervals;

  for (int i = 0; i < n; i++) {
    cin >> startTime;
    cin >> endTime;
    Interval intr{startTime, endTime};
    intervals.push_back(intr);
  }

  sortIntervals(intervals);

  for (int i = 0; i < intervals.size(); i++) {
    cout << intervals[i].startTime << " " << intervals[i].endTime << endl;
  }
}