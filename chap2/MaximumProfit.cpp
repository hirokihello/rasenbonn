#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
#include <math.h>
#include <iomanip>
#include <map>
#include <queue>
#include <climits>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int ui;

int main () {
  int n;
  cin >> n;

  int r;
  vector<int> vec;

  for(int i = 0; i < n; i++) {
    cin >> r;
    vec.push_back(r);
  }

  int res = vec[1]-vec[0];

  int currentMin = vec[0];
  int currentMax = vec[1];

  for(int i = 2; i < n; i++) {
    currentMin = min(currentMin, vec[i-1]);

    res = max(res, vec[i] - currentMin);
  }

  cout << res << endl;
}
