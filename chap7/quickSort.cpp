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

int partition(array<pair<char, int>, 100000 + 10> arr, int p, int r) {
  // 基準を強制的に最後のものにする。
  int x = arr[r].second;

  // -1にしておくと、x以下のものが存在しないときに便利だから
  int i = p-1;

  // indexがi以下は、基準以下となる。
  // どこまでみたか
  for(int j = p; j < r; j++) {
    if (arr[j].second <= x) {
      i = i+1;
      pair<char, int> tmp = arr[j];
      arr[j] = arr[i];
      arr[i] = tmp;
    }
  }

  pair<char, int> tmp = arr[r];
  arr[r] = arr[i+1];
  arr[i+1] = tmp;

  return i+1;
}

int quickSort(array<pair<char, int>, 100000 + 10> arr, int p, int r) {
  if( p < r) {
    int q = partition(arr, p, r);
    quickSort(arr, p, q-1);
    quickSort(arr, q+1, r);
  }
}

int main () {
  int n, a;
  char C;
  cin >> n;

  array<pair<char, int>, 100000 + 10> arr;

  for(int i = 0; i < n; i++) {
    cin >> C >> a;
    arr[i] = {C, a};
  }

  quickSort(arr, 0, n-1);

  for(int i = 0; i < n; i++) {
    cout << arr[i].first << " " << arr[i].second << endl;
  }
}
