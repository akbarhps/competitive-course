#include <bits/stdc++.h>
using namespace std;

/**
 * find sum from arr[x] to arr[y];
 */ 

int main()
{
  int n, tmpSum = 0;
  cin >> n;

  int arr[n], sumArr[n];
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
    tmpSum += arr[i];
    sumArr[i] += tmpSum;
  }

  int x, y;
  cin >> x >> y;
  cout << sumArr[y] - sumArr[x-1] << endl;
  return 0;
}