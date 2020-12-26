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

void bubbleSort (vector<int> vec) {
  int count = 0;
  bool flag = true;
  while(flag) {
    flag = false;

    for(int i = 1; i < vec.size(); i++) {
      if(vec[i-1] > vec[i]) {
        flag = true;
        int tmp = vec[i];
        vec[i] = vec[i-1];
        vec[i-1] = tmp;
        count++;
      }
    }
  }

  for(int i = 0; i < vec.size(); i++) {
    cout << vec[i];
    if(i != vec.size()-1) cout << " ";
  }
  cout << endl;
  cout << count << endl;
}

int main () {
  int n;
  cin >> n;

  vector<int> vec;

  int a;
  for(int i = 0; i < n; i++) {
    cin >> a;
    vec.push_back(a);
  }

  bubbleSort(vec);
}
