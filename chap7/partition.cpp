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

int partition(int arr[], int p, int r) {
  // 基準を強制的に最後のものにする。
  int x = arr[r];

  // -1にしておくと、x以下のものが存在しないときに便利だから
  int i = p-1;

  // indexがi以下は、基準以下となる。
  // どこまでみたか
  for(int j = p; j < r; j++) {
    if (arr[j] <= x) {
      i = i+1;
      int tmp = arr[j];
      arr[j] = arr[i];
      arr[i] = tmp;
    }
  }

  int tmp = arr[r];
  arr[r] = arr[i+1];
  arr[i+1] = tmp;

  return i+1;
}

int main () {
  int n, a;
  int arr[100000 + 10];

  cin >> n;

  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int index = partition(arr, 0, n-1);

  for(int i = 0; i < n; i++) {
    if(i) cout << " ";
    if(i == index) cout << "[" << arr[i] << "]";
    else cout << arr[i];
  }

  cout << endl;
}
