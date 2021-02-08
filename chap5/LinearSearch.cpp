# if 0

AC: 2021-01-01 02:47
# endif
#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
#include <math.h>
#include <iomanip>
#include <map>
#include <queue>
#include <stack>
#include <climits>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int ui;


int main () {
  int n, q, s, t;
  vector<int> ss;
  vector<int> tt;

  cin >> n;

  for(int i = 0; i < n; i++) {
    cin >> s;
    ss.push_back(s);
  }

  sort(ss.begin(), ss.end());

  cin >> q;

  for(int i = 0; i < q; i++) {
    cin >> t;
    tt.push_back(t);
  }

  sort(tt.begin(), tt.end());

  int currentIdx = 0;
  int res = 0;
  for(int i = 0; i < tt.size(); i++) {
    for(int j = currentIdx; j < ss.size() && ss[j] <= tt[i]; j++) {
      if(tt[i] == ss[j]) {
        // cout << "tt[i: " << tt[i] << endl;
        res++;
        break;
      }
      currentIdx++;
    }
    // cout << currentIdx << tt[i] << endl;
  }

  cout << res << endl;
}
