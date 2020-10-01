#include <bits/stdc++.h>
using namespace std;

int fastExpo(int a, long long n, int Mod) {
  int ans = 1;

  while(n > 0) {
    if(n % 2 == 0) {
      a = (1LL * a * a) % Mod;
      n /= 2;
    } else {
      ans = (1LL * ans * a) % Mod;
      n--;
    }
  }
  return ans;
}

int main()
{
  cout << fastExpo(5,1000,1000000);
  return 0;
}