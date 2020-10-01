#include <bits/stdc++.h>
using namespace std;

const int n = 9;
int originalArr[n];
int tempArr[n];
int sumArr[n];

void update(int x, int y, int val) {
  tempArr[x] += val;
  if(y < n-1)
    tempArr[y+1] -= val;
}

void sumAllQuery() {
  int temp = 0;
  for(int i = 0; i < n; i++) {
    temp += tempArr[i];
    sumArr[i] = temp;
    originalArr[i] += sumArr[i];
  }
}

int main()
{
  for(int i = 0; i < n; i++) {
    cin >> originalArr[i];
    tempArr[i] = 0;
    sumArr[i] = 0;
  }

  int nQuery; 
  cin >> nQuery;
  for(int i = 0; i < nQuery; i++) {
    int x, y, val;
    cin >> x >> y >> val;
    update(x-1,y-1,val);
  }
  sumAllQuery();

  for(int i = 0; i < n; i++) {
    cout << tempArr[i] << " ";
  }
  cout << endl;
  for(int i = 0; i < n; i++) {
    cout << sumArr[i] << " ";
  }
  cout << endl;
  for(int i = 0; i < n; i++) {
    cout << originalArr[i] << " ";
  }
  cout << endl << endl;
  return 0;
}