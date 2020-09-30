#include <bits/stdc++.h>
using namespace std;

void sieve(bool prime[], int limit) {
  for(int i = 2; i <= limit; i++) {
    prime[i] = true;

    for(int div = 2; div <= limit/2; div++) {
      if(i % div == 0) {
        // if i mod div == 0
        // then i*i to limit is not prime
        for(int mult = div * 2; mult <= limit; mult += div) {
          prime[mult] = false;
        }
      }
    }
  }
}


int main()
{
  int limit = 100;
  bool prime[100];

  sieve(prime, limit);

  for(int i = 2; i < limit; i++) {
    if(prime[i]) cout << i << endl;
  }
  return 0;
}