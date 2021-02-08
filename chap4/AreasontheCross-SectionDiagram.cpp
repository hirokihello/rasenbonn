# if 0

AC: 2021-01-01 02:00
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
  string s;
  cin >> s;
  stack<int> stk;

  stack<pair<int, int>> resStk;
  bool firstFlag = false;
  int res = 0;

  for(int i = 0; i < s.size(); i++) {
    if(s[i] == '\\') {
      stk.push(i);
    } else if(s[i] == '/' && !stk.empty()) {
      int otherP = stk.top();
      // cout << "i: "<< i << " S: " << ((i - otherP + 1) + (i - otherP)) / 2 << " stk.size(): " << stk.size() <<endl;

      int tmp = ((i - otherP + 1) + (i - otherP)) / 2;
      res += tmp;

      while(!firstFlag && !resStk.empty() && resStk.top().second > stk.size()) {
        tmp += resStk.top().first;

        resStk.pop();
      }

      if(stk.size() == 1) firstFlag = true;
      else firstFlag = false;

      resStk.push({tmp, stk.size()});

      stk.pop();
    }
  }

  cout << res << endl;

  cout << resStk.size();

  vector<int> resVec;

  while(!resStk.empty()) {
    int i = resStk.top().first;
    resVec.push_back(i);
    resStk.pop();
  }

  for(int i = resVec.size()-1; 0 <= i; i--) {
    cout << " " << resVec[i];
  }

  cout << endl;
}
