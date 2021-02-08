# if 0

AC: 2021-01-01 07:37
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

bool binarySearch(vector<int> vec, int key) {
  int n = vec.size();
  int left = 0;
  int right = n;
  int mid = n / 2;

  while(true) {
    if(vec[mid] == key) return true;

    if(vec[mid] < key) left = mid;
    else right = mid;

    mid = (right + left) / 2;

    if((mid == left && vec[left] != key) || (mid == right && vec[right] != key)) return false;
  }
}

int main () {
  int n, q, s, t;
  vector<int> ss;
  vector<int> tt;

  cin >> n;

  for(int i = 0; i < n; i++) {
    cin >> s;
    ss.push_back(s);
  }

  cin >> q;

  for(int i = 0; i < q; i++) {
    cin >> t;
    tt.push_back(t);
  }

  int currentIdx = 0;
  int res = 0;

  for(int i = 0; i < tt.size(); i++) {
    if(binarySearch(ss, tt[i])) res++;
  }

  cout << res << endl;
}
