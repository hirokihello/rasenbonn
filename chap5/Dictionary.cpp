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
  int n;
  cin >> n;

  array<vector<pair<int, int>>, 20> arr;

  int a, x, y;

  for(int i = 0; i < n; i++) {
    cin >> a;
    for(int j = 0; j < a; j++) {
      cin >> x >> y;
      arr[i+1].push_back(make_pair(x, y));
    }
  }

  // せいぜい2 ^ 15が最大値なので、全てをbit全探索していくいく感じでいいかな。
  // 矛盾が生じないとき、その時の正直者の数を数え上げれば良い。

  // 不明-1, うそ0、正直1
  array<int, 20> kazu;

  for(int i = 0; i < n; i++) {
    while(i >> 1) {}
  }
}
