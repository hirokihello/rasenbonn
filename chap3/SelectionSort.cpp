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

void selectionSort (vector<int> vec) {
  int count = 0;
  int currentIdx;

  for(int i = 0; i < vec.size(); i++) {
    int minJ = i;

    for(int j = i+1; j < vec.size(); j++) {
      if(vec[j] < vec[minJ]) {
        minJ = j;
      }
    }

    if(minJ != i) count++;

    int tmp = vec[minJ];
    vec[minJ] = vec[i];
    vec[i] = tmp;
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

  selectionSort(vec);
}
