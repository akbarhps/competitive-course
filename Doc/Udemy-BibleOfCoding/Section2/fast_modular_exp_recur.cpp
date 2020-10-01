#include <bits/stdc++.h>
using namespace std;

const int mod = 100000037;

// fast modular with reccursion
long long fast_modular_exp(int x, int y) {
  if(y == 0) {
    return 1;
  }
  if(y % 2 == 0) {
    return fast_modular_exp((1LL * x * x) % mod, y/2);
  } 
  return ((1LL * x * fast_modular_exp(x, y-1)) % mod);
}


int main()
{
  cout << fast_modular_exp(3,5) << endl;
  return 0;
}