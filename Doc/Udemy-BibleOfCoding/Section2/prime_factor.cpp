#include <bits/stdc++.h>
using namespace std;

int fact[100] = {0};
int len = 0, expo[100] = {0};

void primeFactor(int n) {
  if(n == 1) {
    fact[len] = 2;
    expo[len] = 0;
    len++;
    return;
  }
  int div = 2;
  while(1LL * div * div <= n && n > 1) {
    int count = 0;
    while(n % div == 0) {
      count++;
      n /= div;
    }
    if(count > 0) {
      fact[len] = div;
      expo[len] = count;
      len++;
    }
    div++;
  }
  if(n > 1) {
    fact[len] = n;
    expo[len] = 1;
    len++;
  }
}

int main()
{
  primeFactor(7);
  for(int i = 0; i < len; i++) {
    cout << fact[i] << " " << expo[i] << endl;
  }
  return 0;
}