# if 0

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
  int n, a;
  vector<int> vec;
  cin >> n;

  for(int i = 0; i < n; i++ ) {
    cin >> a;
    vec.push_back(a);
  }

  int q, m;
  cin >> q;

  map<int, bool> mp;
  for (int bit = 0; bit < (1<<n); ++bit) {
    // 桁はn個
    int currentRes = 0;
    for (int i = 0; i < n; ++i) {
      if (bit & (1<<i)) { // 列挙に i が含まれるか
        currentRes += vec[i];
      }
    }

    mp[currentRes] = true;
  }
  for(int i = 0; i < q; i++ ) {
    cin >> m;
    // これでnこのフラグのパターンを試す。

    if(mp[m]) cout << "yes" << endl;
    else cout << "no" << endl;
  }
}
